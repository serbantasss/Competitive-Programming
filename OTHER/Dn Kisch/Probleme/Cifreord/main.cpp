#include <cstdio>
using namespace std;
int f[10];
int main()
{
    freopen("cifreord.in","r",stdin);
    freopen("cifreord.out","w",stdout);
    int n,x,i,k=0;
    scanf("%d",&n);
    for(i=1; i<=n; ++i)
        {
            scanf("%d",&x);
            f[x]++;
        }
    for(i=0;i<=9;++i)
        for(int j=1;j<=f[i];++j)
           {k++;
            printf("%d ",i);
            if(k%20==0)
                printf("\n");
            }
    return 0;
}
