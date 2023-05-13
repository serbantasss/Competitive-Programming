#include <fstream>
#include <algorithm>
using namespace std;
struct boi
{
  int x,y,dir;
}v[100005],f[100005];

bool mycmp(boi a,boi b)
{
    if(a.x==b.x)
       return a.y>b.y;
    return a.x<b.x;
}
int cnt[100005];
int main()
{
    ifstream cin("meetings.in");
    ofstream cout("meetings.out");
    int n,l,timp,s=0,ans=0;
    cin>>n>>l;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i].x>>v[i].y>>v[i].dir;
        if(v[i].dir==1)
        {
            f[i].x=l-v[i].x;
        }
        else
        {
            f[i].x=v[i].x;
        }
        f[i].y=v[i].y;
        s+=v[i].y;
    }
    sort(v+1,v+n+1,mycmp);
    sort(f+1,f+n+1,mycmp);
    int s1=0;
    for(int i=1;i<=n;i++)
    {
        s1+=f[i].y;
        if(s1>s/2)
        {
            timp=f[i].x;
            break;
        }
    }
    int k=0;
    for(int i=1;i<=n;i++)
    {
        if(v[i].dir==1)
        {
            cnt[++k]=i;
        }
        if(v[i].dir==-1)
        {
            int st=1,dr=k,last=k+1;
            while(st<=dr)
            {
                int mij=(st+dr)/2;
                if((v[i].x-cnt[mij])/2<=timp)
                {
                    dr=mij-1;
                    last=mij;
                }
                else
                {
                    st=mij+1;
                }
            }
            ans+=(k-last+1);
        }
    }
    cout<<ans;
    return 0;
}
