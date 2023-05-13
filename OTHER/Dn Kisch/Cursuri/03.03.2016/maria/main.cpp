#include <cstdio>

using namespace std;
const int maxn=1000;
const int maxm=1000;
int a[maxn+5][maxn+5],b[maxn+5][maxm+5];
int main()
{
    freopen("maria.in","r",stdin);
    freopen("maria.out","w",stdout);
    int n,m,i,j,smax,s,i1,i2,j1,j2,k,nr=0,p,q;
    scanf("%d%d%d%d%d",&n,&m,&p,&q,&k);
    for(i=1; i<=k; ++i)
        {
            scanf("%d%d",&i1,&j1);
            a[i1][j1]=-1;
        }
    for(i=1; i<=n; ++i)
        for(j=1; j<=m; ++j)
            b[i][j]=b[i-1][j]+b[i][j-1]-b[i-1][j-1]+a[i][j];
    for(i1=1; i1<=n; ++i1)
        for(j1=1; j1<=m; ++j1)
            for(i2=i1; i2<=n; ++i2)
                for(j2=j1; j2<=m; ++j2)
                if((i2-i1+1==p && j2-j1+1==q)||(i2-i1+1==q && j2-j1+1==p))
                {
                    s=b[i2][j2]-b[i2][j1-1]-b[i1-1][j2]+b[i1-1][j1-1];
                    if(s==0)
                        nr++;
                }
    printf("%d",nr);
    return 0;
}
