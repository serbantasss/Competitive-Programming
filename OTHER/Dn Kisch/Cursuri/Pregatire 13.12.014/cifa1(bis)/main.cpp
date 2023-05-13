#include <iostream>

using namespace std;

int main()
{
    int n,cn,c1,c2,ok,nr=0;
    cin>>n;cn=n;
    long long p;
    p=1;
    do
    {
        p*=10;
        n/=10;
    }while(n>0);
    n=cn;
    p/=10;
    if(n<10)
       {
         cout<<n;
         return 0;
       }
    nr=0;
    c1=n/p;
    n=n%p;
    p/=10;
    ok=0;
    while(p>0)
      {
       c2=n/p;
       if(c1>=c2)
          {
           nr=nr+c1*p;
           c1=c2;
           n=n%p;
           p/=10;
          }
        else
           {
            ok=1;
            do
            {
            nr=nr+n/p*p;
            n=n%p;
            p=p/10;
            }while(n>0);
           }
      }
    if(ok==0)
      cout<<cn/10;
    else
      cout<<nr;
    return 0;
}
