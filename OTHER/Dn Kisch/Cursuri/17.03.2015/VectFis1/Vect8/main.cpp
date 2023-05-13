#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    freopen("vect8.in","r",stdin);
    freopen("vect8.out","w",stdout);
    int n,i,nr=1,x;
    scanf("%d",&n);
    if(n%2==0)
    {
     n++;
     for(i=1;i<=n/2;++i)
            printf("%d %d ",i,n-i);
    }
    else
    {
      n++;
      for(i=1;i<=(n-1)/2;++i)
            printf("%d %d ",i,n-i);
      printf("%d",n/2);
    }
    return 0;
}
