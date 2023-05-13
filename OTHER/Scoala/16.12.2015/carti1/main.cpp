#include <cstdio>
using namespace std;
int f[100001];
int main()
{
    freopen("carti1.in","r",stdin);
    freopen("carti1.out","w",stdout);
    int n,i,x,nr=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        f[x]=i;
    }
    for(i=1;i<n;++i)
        if(f[i]>f[i+1])
            nr++;
    printf("%d",nr);
    return 0;
}
