#include <cstdio>

using namespace std;
int v[25001];
int main()
{
    freopen("joc.in","r",stdin);
    freopen("joc.out","w",stdout);
    int n,i,nr=1,x;
    scanf("%d",&n);
    printf("\n");
    for(i=1;i<=n;++i)
    {
      scanf("%d",&x);
      int inv=0,cx=x;
      do
      {
          inv=inv*10+cx%10;
          cx/=10;
      }while(cx);
      do
      {
          if(inv%10%2==inv/10%10%2 &&)
      }
    }
    return 0;
}
