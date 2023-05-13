#include <cstdio>

using namespace std;
const int NMAX=50;
const int MMAX=50;
int a[NMAX+5][MMAX+5];
int main()
{
    freopen("ex2.in","r",stdin);
    freopen("ex2.out","w",stdout);
    int n,m,i,j,c,l,s1,s2;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;++i)
        for(j=1;j<=m;++j)
            scanf("%d",&a[i][j]);
    scanf("%d%d",&l,&c);
    ///calculam s1
    s1=0;
    for(i=l,j=c;i<=n && j<=m;++i,++j)
        s1+=a[i][j];
    for(i=l,j=c;i>=1 && j>=1;--i,--j)
        s1+=a[i][j];
    s1-=a[l][c];
    ///calculam s2
    s2=0;
    for(i=l,j=c;i>=1 && j<=n;--i,++j)
        s2+=a[i][j];
    for(i=l,j=c;i<=n && j>=1;++i,--j)
        s2+=a[i][j];
    s2-=a[l][c];
    printf("%d %d\n%d",s1,s2,s1+s2);
    return 0;
}
