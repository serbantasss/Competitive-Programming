#include <cstdio>

using namespace std;

int main()
{
    /**Se citeste un nr. natural n
    format din maxim 9 cifre.
    a)Sa se afiseza suma cifrelor pare.Daca
    nu exista cifre pare se va afisa -1
    b)Sa se afiseze numarul cu 9 mai mic decat
    n din care s-au eliminat cifrele egale cu 3*/
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
    int n,i,nr,p;
    scanf("%d",&n);
    int suma=0,ok=0,cn=n;
    do
    {
        if(n%10%2==0)
            {ok=1;suma+=n%10;}
        n/=10;
    }while(n);
    n=cn;
    if(ok)
      printf("%d\n",suma);
    else
        printf("-1\n");
    p=1;nr=0;int c;
    do
    {
      c=n%10;
      if(c!=3)
      {nr=nr+c*p;
      p*=10;}
      n/=10;
    }while(n);
    printf("%d\n",nr-9);
    return 0;
}
