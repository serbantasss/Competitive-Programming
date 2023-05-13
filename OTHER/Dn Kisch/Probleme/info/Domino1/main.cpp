#include <cstdio>

using namespace std;
struct it
{
   int p,h;
};
it v[1001];
int main()
{
    freopen("domino1.in","r",stdin);
    freopen("domino1.out","w",stdout);
    int n,nr=1,poz=1,pozmax=1,i,p,h,sf;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
      scanf("%d%d",&p,&h);
      v[i].p=p;
      v[i].h=h;
    }
    sf=v[1].p+v[1].h;
    for(i=2;i<=n;++i)
    {
      if(sf<v[i].p)
         {
          nr++;
          if(poz>pozmax)
             pozmax=poz;
          poz=1;
          sf=v[i].h+v[i].p;
         }
      else
          {
            poz++;
            if(sf<v[i].h+v[i].p)
               sf=v[i].h+v[i].p;
          }
    }
    if(pozmax<poz)
       pozmax=poz;
    printf("%d %d",nr,pozmax);
    return 0;
}
