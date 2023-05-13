#include <cstdio>
#include <cmath>
using namespace std;
void desc(int n)
{
  int d,e,lim;
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
        printf("%d^%dx",d,e);
     d++;
  }
  if(n>1)
    printf("%d^1",n);
}
int main()
{
    int n,i;
    scanf("%d",&n);
    desc(n);
    return 0;
}
