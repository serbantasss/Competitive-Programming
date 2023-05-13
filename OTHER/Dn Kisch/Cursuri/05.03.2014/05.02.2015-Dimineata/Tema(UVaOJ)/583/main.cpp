#include <cstdlib>
using namespace std;
#include <cstdio>
int main()
{
    freopen("583.in","r",stdin);
    freopen("583.out","w",stdout);
    int n;
    while(n)
    {
    scanf("%d",&n);
    if(n==0)
        break;
    int d,e;
    d=2;
    printf("%d = ",n);
    if(n<0)
        {printf("-1 x");n=abs(n);}
    while(n>1 && d*d<=n)
     {
      e=0;
      while(n%d==0)
      {
          if(n/d!=1)
            printf("%d x ",d);
          else
            printf("%d",d);
          e++;
          n/=d;
      }
     d++;
     }
    if(n>1)
       printf("%d",n);
    printf("\n");
    }
    return 0;
}
