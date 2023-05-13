#include <cstdio>
using namespace std;
int v[101];
int main()
{
    freopen("codcorect.in","r",stdin);
    freopen("codcorect.out","w",stdout);
    int n,x;
    scanf("%d",&n);
    for(int i=1;i<=n;++i)
    {
        scanf("%d",&x);
        int nrc=1,cx=x;
        do
        {
            v[nrc]=cx%10;
            nrc++;
            cx/=10;
        }while(cx);
        nrc--;
        if(nrc%2==1 && v[1]>v[nrc])
            {
            int aux=v[1];
            v[1]=v[nrc];
            v[nrc]=aux;
            }
        for(int j=nrc;j>=1;--j)
            printf("%d",v[j]);
        printf(" ");
    }
    return 0;
}
