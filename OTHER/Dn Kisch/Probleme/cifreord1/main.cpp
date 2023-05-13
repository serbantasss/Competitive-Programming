#include <cstdio>
using namespace std;
int f[10];
int main()
{
    freopen("cifreord1.in","r",stdin);
    freopen("cifreord1.out","w",stdout);
    int n,x,i,k=0;
    while(scanf("%d",&x)!=EOF)
    {
        do
        {
            f[x%10]++;
            x/=10;
        }while(x);
    }
    for(i=9;i>=0;--i)
        for(int j=1;j<=f[i];++j)
           {k++;
            printf("%d ",i);
            if(k%20==0)
                printf("\n");
            }
    return 0;
}
