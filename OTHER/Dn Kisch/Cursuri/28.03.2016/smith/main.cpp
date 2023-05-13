#include <cstdio>
#include <cmath>
using namespace std;
int f[10];
int suma(int n)
{
    int s=0;
    do
    {
        s+=n%10;
        n/=10;
    }while(n);
    return s;
}
int pow(int x,int y)
{
    int n=1;
    for(int i=1;i<=y;++i)
        n*=x;
    return n;
}
bool patr(int x)
{
    if(sqrt((double)x)==(int)sqrt((double)x))
        return 1;
    return 0;
}
int inv(int n)
{
    int nr=0;
    do
    {
        nr=n%10+nr*10;
        n/=10;
    }while(n);
    return nr;
}
bool pal(int x)
{
    if(inv(x)==x)
        return 1;
    return 0;
}
bool prim(int n)
{
    if(n<2)
        return 0;
    if(n%2==0 && n>2)
        return 0;
    for(int d=3;d*d<=n;d+=2)
        if(n%d==0)
            return 0;
    return 1;
}
bool smith(int n)
{
    int d=2,e,s=0,cn=n;
    if(prim(n)==1)
        return 0;
    while(d*d<=n && n>1)
    {
        e=0;
        while(n%d==0)
            n/=d,e++;
        if(e>0)
            s=s+suma(d)*e;
        d++;
    }
    if(n>1)
        s=s+suma(n);
    if(s==suma(cn) && prim(cn)==0)
        return 1;
    return 0;
}
int main()
{
    freopen("smith.in","r",stdin);
    freopen("smith.out","w",stdout);
    char ch;
    int n,i;
    scanf("%c\n%d",&ch,&n);
    if(ch=='a')
    {
        int x=pow(10,n-1);
        for(i=x*10-1;i>=x;--i)
            if(smith(i))
            {
             printf("%d",i);
             break;
            }
        return 0;
    }
    if(ch=='b')
    {
        int x=pow(10,n-1);
        for(i=x*10-1;i>=x;--i)
            if(smith(i) && pal(i))
            {
             printf("%d",i);
             break;
            }
        return 0;
    }
    if(ch=='c')
    {
        int x=pow(10,n-1);
        for(i=x*10-1;i>=x;--i)
            if(smith(i) && smith(inv(i)) && pal(i)==0)
            {
             printf("%d",i);
             break;
            }
        return 0;
    }
    if(ch=='d')
    {
        int x=pow(10,n-1);
        for(i=x*10-1;i>=x;--i)
            if(smith(i) && patr(i))
            {
             printf("%d",i);
             break;
            }
        return 0;
    }
    return 0;
}
