#include <cstdio>

using namespace std;
long long  b,l;
int i;
int main()
{
    freopen("cuc.in","r",stdin);
    freopen("cuc.out","w",stdout);
    int x,zile,h,p;
    scanf("%d",&x);
    zile=x/90;
    x=x%90;
    for(h=1;h<=12;++h)
       for(p=1;p<=12;++p)
          {
            b=0;
            for(i=1;i<=h;++i)
              {
                l=p+i;
                if(l>12)
                   l=l-12;
                b=b+l+1;
              }
              if(b==x)
                   {
                     printf("%d",zile*12+h);
                     return 0;
                   }
          }
    return 0;
}
