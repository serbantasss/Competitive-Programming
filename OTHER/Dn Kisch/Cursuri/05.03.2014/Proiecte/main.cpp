#include <cstdio>
#include <algorithm>
using namespace std;
struct echipa
{
  int d,profit;
};
echipa v[1005];
bool cmp(echipa a,echipa b)
{
    return a.profit>b.profit;
}
int f[1005];
int main()
{
    freopen("proiecte.in","r",stdin);
    freopen("proiecte.out","w",stdout);
    int n,i,t,j;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
        {
        int x,y;
        scanf("%d%d",&x,&y);
        v[i].d=x;
        v[i].profit=y;
        }
    sort(v+1,v+n+1,cmp);
    t=0;
    for(i=1;i<=n;++i)
      for(j=v[i].d;j>=1;--j)
        if(f[j]==0)
        {
            f[j]=i;
            t+=v[i].profit;
            break;
        }
    printf("%d",t);
    return 0;
}
