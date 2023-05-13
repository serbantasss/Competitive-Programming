#include <cstdio>
#include <cmath>
using namespace std;
int  desc(int n)
{
  int d,e,lim,nrdiv=1;
  lim=(int)sqrt((double)n);
  d=2;
  while(n>1 && d<=lim)
  {
      e=0;
      while(n%d==0)
      {
          e++;
          n/=d;
      }
      if(e>0)
        nrdiv=nrdiv*(e+1);
      d++;
  }
  if(n>1)
    nrdiv*=2;
return nrdiv;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    printf("%d",desc(n));
    return 0;
}
