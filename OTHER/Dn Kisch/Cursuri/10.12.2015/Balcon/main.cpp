#include <cstdio>
#include <algorithm>
using namespace std;
const int NMAX=100;
short int a[NMAX+5][NMAX+5],v[NMAX*NMAX+5];
int main()
{
    freopen("balcon.in","r",stdin);
    freopen("balcon.out","w",stdout);
    int n,i,j,np,k,l,m;
    scanf("%d",&n);
    m=n*n;
    for(i=1; i<=m; ++i)
        scanf("%d",&v[i]);
    sort(v+1,v+m+1);
    np=(n+1)/2;
    l=0;
    for(k=1; k<=np; ++k)
    {
        for(j=k; j<=n+1-k; ++j)
            a[k][j]=v[++l];
        for(i=k+1; i<=n+1-k; ++i)
            a[i][n+1-k]=v[++l];
        for(j=n-k; j>=k; --j)
            a[n+1-k][j]=v[++l];
        for(i=n-k; i>=k+1; --i)
            a[i][k]=v[++l];
    }
    for(i=1; i<=n; ++i)
    {
        for(j=1; j<=n; ++j)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    return 0;
}
