#include <cstdio>

using namespace std;

int main()
{
    int a,b,i,nr,x,c,p=0;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        for(i=b; i<=a; ++i)
        {
            x=i;
            nr=0;
            do
            {
                c=x%10;
                nr=nr*10+c;
                x/=10;
            }
            while(x>0);
            if(nr==i)
                p++;
        }
    }
    if(b > a)
        for(i=a; i<=b; ++i)
        {
            x=i;
            nr=0;
            do
            {
                c=x%10;
                nr=nr*10+c;
                x/=10;
            }
            while(x>0);
            if(nr==i)
                p++;
        }
    if(a==b)
      {
          x=a=b;
          do
            {
                c=x%10;
                nr=nr*10+c;
                x/=10;
            }while(x>0);
        if(a==nr)
           p++;
      }
    printf("%d",p);
    return 0;
}
