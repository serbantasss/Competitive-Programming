#include <cstdio>

using namespace std;
const int NMAX=1000;
const int MMMAX=1000;
int a[NMAX][MMAX];
int main()
{
    int n,m,i,j,p,k,ok=2,o,nr=0,poz=0;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;++i)
        for(j=1;j<=m;++j)
            scanf("%d",a[i][j]);
    scanf("%d%d",&p,&k);
    nr++;
    for(i=1;i<=n;++i)
        {
        if(i%2==1)
            for(j=1;j<=m;++j)
                if(a[i][j]==k)
                    {
                    printf("%d %d\n",i,j);
                    ok=1;
                    scanf("%d",&k);
                    nr++;
                    }
        else
            for(j=m;j>=i;--j)
                if(a[i][j]==k)
                    {
                    printf("%d %d\n",i,m-j);
                    ok=1;
                    scanf("%d",&k);
                    nr++;
                    }
        }
    if(nr<p)
        while(nr<=p)
    return 0;
}
