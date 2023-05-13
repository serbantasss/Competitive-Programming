#include <cstdio>
using namespace std;
int verifvale(int n)
{
    int a,b,c,ok;
    a=n%10;
    n/=10;
    b=n%10;
    n/=10;
    ok=0;
    while(n)
    {
        c=n%10;
        if(b<a && b<=c)
            ok++;
        a=b;
        b=c;
        n/=10;
    }
    if(ok==1)
        return 2;
    else
        return 1;
}
int verifmunte(int n)
{
    int a,b,c,ok;
    a=n%10;
    n/=10;
    b=n%10;
    n/=10;
    ok=0;
    while(n)
    {
        c=n%10;
        if(b>a && b>=c)
            ok++;
        a=b;
        b=c;
        n/=10;
    }
    if(ok==1)
        return 2;
    else
        return 1;
}
int v[6];
int main()
{
    freopen("vale.in","r",stdin);
    freopen("vale.out","w",stdout);
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int ok1=1,ok2=1,cif,c,cn;
        cn=n;
        cif=n%10;
        n/=10;
        do
        {
            c=n%10;
            if(c<cif)
                ok1=0;
            if(c>cif)
                ok2=0;
            cif=c;
            n/=10;
        }while(n);
        n=cn;
        if(ok2)
            v[1]++;
        else
            if(ok1)
               v[2]++;
        else
          if(verifmunte(n)==2)
            v[3]++;
        else
            if(verifvale(n)==2)
                v[4]++;
            else
                v[5]++;
    }
    printf("Urcus:%d\nCoboras:%d\nDeal:%d\nVale:%d\nOarecare:%d",v[1],v[2],v[3],v[4],v[5]);
    return 0;
}
