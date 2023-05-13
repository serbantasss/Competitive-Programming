#include <cstdio>
using namespace std;
int v[505][55],d[505][55];
int main()
{
    freopen("maxsum.in","r",stdin);
    freopen("maxsum.out","w",stdout);
    int n,i,j,ki,kj,l,sp,maxim=0;
    scanf("%d",&n);
    for(i=1; i<=n; ++i)
    {
        scanf("%d",&l);
        v[i][0]=l;
        for(j=1; j<=l; ++j)
            scanf("%d",&v[i][j]);
    }
    for(j=1; j<=v[1][0]; ++j)
        d[1][j]=v[1][j];
    for(ki=2; ki<=n; ++ki)
        for(kj=1; kj<=v[ki][0]; ++kj)
        {
            int s,ma,ant;
            d[ki][kj]=v[ki][kj];
            ant=0;
            for(i=1; i<ki; ++i)
            {
                ma=ant;
                s=d[ki][kj];
                for(j=1; j<=v[i][0]; ++j)
                {
                    sp=s;
                    if(ant<=v[i][j] && v[i][j]<=v[ki][kj])
                    {
                        sp+=v[i][j];
                        if(sp>s)
                            s=sp,ma=v[i][j];
                    }
                }
                ant=ma;
            }
            if(s>d[ki][kj])
                    d[ki][kj]=s;
        }
    for(i=1; i<=n; ++i)
        for(j=1; j<=v[i][0]; ++j)
            if(maxim<d[i][j])
                maxim=d[i][j];
    printf("%d",maxim);
    return 0;
}
