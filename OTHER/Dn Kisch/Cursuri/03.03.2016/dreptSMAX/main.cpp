#include <cstdio>

using namespace std;
const int maxn=100;
const int maxm=100;
int a[maxn+5][maxn+5],b[maxn+5][maxm+5];
int main()
{
    freopen("smax.in","r",stdin);
    freopen("smax.out","w",stdout);
    int n,m,i,j,smax,s,i1,i2,j1,j2;
    scanf("%d%d",&n,&m);
    for(i=1; i<=n; ++i)
        for(j=1; j<=m; ++j)
            scanf("%d",&a[i][j]);
    for(i=1; i<=n; ++i)
        for(j=1; j<=m; ++j)
            b[i][j]=b[i-1][j]+b[i][j-1]-b[i-1][j-1]+a[i][j];
    smax=b[1][1];
    for(i1=1; i1<=n; ++i1)
        for(j1=1; j1<=m; ++j1)
            for(i2=i1; i2<=n; ++i2)
                for(j2=j1; j2<=m; ++j2)
                {
                    s=b[i2][j2]-b[i2][j1-1]-b[i1-1][j2]+b[i1-1][j1-1];
                    if(s>smax)
                        smax=s;
                }
    printf("%d",smax);
    return 0;
}
