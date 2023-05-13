#include <cstdio>

using namespace std;
const int NMAX=100;
int a[NMAX+5][NMAX+5];
int main()
{
    int n,i,j,np,k;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
      for(j=1;j<=n;++j)
        scanf("%d",&a[i][j]);
    np=(n+1)/2;
    for(k=1;k<=np;++k)
    {
      for(j=k;j<=n+1-k;++j)
        printf("%d ",a[k][j]);
      for(i=k+1;i<=n+1-k;++i)
        printf("%d ",a[i][n+1-k]);
      for(j=n-k;j>=k;--j)
        printf("%d ",a[n+1-k][j]);
      for(i=n-k;i>=k+1;--i)
        printf("%d ",a[i][k]);
    }
    return 0;
}
