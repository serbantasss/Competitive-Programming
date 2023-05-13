#include <cstdio>
#include <cmath>
using namespace std;
int k;
int desc(int n)
{
  int d,e,lim,nr=1;
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
        nr=nr*(e+1);
     d++;
  }
  if(n>1)
    nr*=2;
return nr;
}
bool ver(int x)
{
    if(desc(x)==k)
        return true;
    else
        return false;
}
int main()
{
    freopen("vect5.in","r",stdin);
    freopen("vect5.out","w",stdout);
    int n,i,x;
    bool ok=false;
    scanf("%d%d",&n,&k);
    for(i=1;i<=n;++i)
    {
        scanf("%d",&x);
        if(ver(x)==true)
            ok=true,printf("%d ",x);
    }
    if(ok==false)
        printf("NU EXISTA");
    return 0;
}
