#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    freopen("vect9.in","r",stdin);
    freopen("vect9.out","w",stdout);
    int n,i,nr=1,x,j;
    scanf("%d",&n);
    if(n%2==1)
    {
     j=1;
     for(i=1;i<=n/2+1;++i)
     {
        printf("%d ",j);j+=2;
     }
     j=n-1;
     for(i=1;i<=n/2;++i)
     {
         printf("%d ",j);
         j-=2;
     }
    }
    else
    {
      j=1;
      for(i=1;i<=n/2;++i)
     {
        printf("%d ",j);j+=2;
     }
     j=n-2;
     for(i=1;i<=n/2;++i)
     {
         printf("%d ",j);
         j-=2;
     }
    }
    return 0;
}
