#include <cstdio>
using namespace std;
int main()
{
    freopen("cifre.in","r",stdin);
    freopen("cifre.out","w",stdout);
    int n,nrc,a,b,inv,cn;
    scanf("%d",&n);
    cn=n;
    inv=0;
    do
    {
        inv=inv*10+cn%10;
        cn/=10;
    }
    while(cn);
    int c=0,d;
    for(d=1; d*d<n; ++d)
        if(n%d==0)
            c+=2;
    if(d*d==n)
        c++;
    inv=inv+c;
    cn=inv;
    d=0;
    do
    {
        d++;
        cn/=10;
    }while(cn);
    c=0;
    cn=inv+c;
    if(d%2==0)
    {
    cn=inv+c;
        do
        {
          c++;
          if(c==d/2)
            a=cn%10;
        if(c==d/2+1)
            b=cn%10;
        cn/=10;
        }while(c<=d/2);
        int nr;
        nr=b*10+a;
        printf("%d",nr);
    }
    else
      {
       cn=inv+c;
        do
        {
          c++;
          if(c==d/2+1)
            a=cn%10;
        cn/=10;
        }while(c<=d/2);
        printf("%d",a);
    }
    return 0;
}
