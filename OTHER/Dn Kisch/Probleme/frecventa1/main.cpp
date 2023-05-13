#include <cstdio>
using namespace std;
int f[100];
int main()
{
    //freopen("frecventa1.in","r",stdin);
    //freopen("frecventa1.out","w",stdout);
    int n,x,i,j=0,max=0;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
        scanf("%d",&x),f[x]++;
    for(i=0;i<=99;++i)
        if(f[x]>max)
          max=f[x];
    for(i=max;i>=1;--i)
        for(j=0;j<=99;++j)
           if(f[j]==i)
              printf("%d ",j);
    return 0;
}
