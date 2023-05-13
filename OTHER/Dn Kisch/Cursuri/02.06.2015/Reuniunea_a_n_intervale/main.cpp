#include <cstdio>
#include <algorithm>
using namespace std;
struct INTERVAL
{
    int x,y;
};
INTERVAL v[100001];
bool cmp(INTERVAL a,INTERVAL b)
{
    if(a.x==b.x)
        return a.y>b.y;
    return a.x<b.x;
}
int main()
{
    int n,a,b,i,x,y,L,R,ans;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        scanf("%d%d",&x,&y);
        v[i].x=x;v[i].y=y;
    }
    sort(v+1,v+n+1,cmp);
    ans=0;
    L=v[1].x;R=v[1].y;
    for(i=2;i<=n;++i)
        if(v[i].x<=R)
            {
            if(v[i].y>=R)
              R=v[i].y;
            }
        else
            ans=ans+R-L,L=v[i].x,R=v[i].y;
     ans=ans+R-L;
     printf("%d",ans);
    return 0;
}
