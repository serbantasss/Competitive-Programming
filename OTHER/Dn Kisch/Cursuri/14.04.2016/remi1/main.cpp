#include <fstream>

using namespace std;
int v[10002], n1[10002], n2[10002],n3[10002],f[11];
int main()
{

    freopen("remi1.in","r",stdin);
    freopen("remi1.out","w",stdout);
    int n,jj,i,x;
    scanf("%d%d",&jj,&n);
    for( i=1; i<=n; ++i)
    {
        scanf("%d",&v[i]);
        n1[i]=v[i];
        n2[i]=v[i];
        f[v[i]]++;
    }
    n1[n+1]=-1;
    int j,ok=0;
    for(i=1; i<=n; ++i)
        if(n1[i]<jj)
        {
            ok=1;
            for(j=n; j>=i; j--)
                n1[j+1]=n1[j];
            n1[i]=jj;
            n++;
            break;
        }
    printf("\n");
    ///n2-mutarea piesei spre dreapta
    n--;
    for(i=1; i<=n; ++i)
        if(n2[i]<n2[i+1])
        {
            x=n2[i];
            for(j=i;j<=n;++j)
                n2[j]=n2[j+1];
            n--;
            for(int ii=n;ii>=1;--ii)
                if(v[i]<x)
            {
                for(j=n; j>=i; j--)
                    n1[j+1]=n1[j];
                n2[ii]=x;
                n++;
            }
        }
    for(i=1; i<=n; ++i)
        printf("%d",n2[i]);
    return 0;
}
