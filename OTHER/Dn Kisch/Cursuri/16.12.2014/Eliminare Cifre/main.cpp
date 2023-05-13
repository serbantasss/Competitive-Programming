#include <cstdio>

using namespace std;

int main()
{
    int n,x,s=0,i,uc,c,nr,inv,cx;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
      {
        scanf("%d",&x);
        nr=0;
        uc=x%10;
        cx=x;
        inv=0;
        do
        {
            c=x%10;
            inv=inv*10+c;
            x/=10;
        }while(x>0);
        do
        {
            c=inv%10;
            if(c!=uc)
              nr=nr*10+c;
            inv/=10;
        }while(inv>0);
       s+=nr;
      }
    printf("%d",s);
    return 0;
}
