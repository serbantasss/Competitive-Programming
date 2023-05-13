#include <cstdio>

using namespace std;

int main()
{
    int n,c,a,p=1,nr=0,ok=1;
    scanf("%d%d",&n,&c);
    do
    {
        a=n%10;
        if(a!=c)
        {
            nr=nr+a*p;
            ok=0;
            p*=10;
        }
        n/=10;
    }while(n>0);
    if(ok==1)
      printf("-1");
    else
        printf("%d",nr);
    return 0;
}
