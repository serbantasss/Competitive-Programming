#include <cstdio>

using namespace std;
const int NMAX=100;
const int MMAX=100;
int a[NMAX+5][MMAX+5];
int main()
{
    freopen("ex1.in","r",stdin);
    freopen("ex1.out","w",stdout);
    int n,m,i,j;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;++i)
        for(j=1;j<=n;++j)
            scanf("%d",&a[i][j]),a[i][0]+=a[i][j];
    ///Afisare
    for(i=1;i<=n;++i)
    {
        for(j=1;j<=m;++j)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    ///Sa se afiseze indicele linilor suma max. a elem. de pe o linie
    int max=a[i][0];
    for(i=1;i<=n;++i)
        if(max<a[i][0])
            max=a[i][0];
    printf("%d\n",max);
    for(i=1;i<=n;++i)
        if(max==a[i][0])
            printf("%d ",i);
    return 0;
}
