#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;
struct intt
{
    int x,nr;
};
const int nmax=10000;
vector<intt>v;
bool c[nmax+5];
void ciur()
{
    intt in;
    c[0]=c[1]=1;
    for(int i=4; i<=nmax; i+=2)
        c[i]=1;
    in.x=2;
    in.nr=0;
    v.push_back(in);
    for(int i=3; i*i<=nmax; i+=2)
    {
        if(c[i]==0)
        {
            in.x=i;
            v.push_back(in);
        }
        else
            for(int j=i*i; j<=nmax; j+=2*i)
                c[i]=1;
    }
}
inline int cmmdc(int a,int b)
{
    int r;
    r = a % b;
    while(r != 0)
    {
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}
int main()
{
    freopen("miny.in","r",stdin);
    freopen("miny.out","w",stdout);
    int n,m,i,j,x,numere=0,y=1;
    scanf("%d",&n);
    ciur();
    for(i=1; i<=n; ++i)
    {
        scanf("%d",&x);
        y=(y*x)%100;
        for(int j=0; j<v.size() && x>1; ++j)
            while(x%v[j].x==0)
            {
                x/=v[j].x;
                if(v[j].nr==0)
                    numere++;
                v[j].nr++;
            }
    }
    printf("%d\n%d\n",y/10%10,numere);
    int cm=0;
    for(i=0; i<v.size(); ++i)
        if(v[i].nr>0)
            {
                if(cm==0)
                    cm=v[i].nr;
                else
                    cm=cmmdc(cm,v[i].nr);
            }
    for(i=0; i<v.size(); ++i)
        if(v[i].nr>0)
            {
                printf("%d %d\n",v[i].x,v[i].nr/cm);
            }
    return 0;
}
