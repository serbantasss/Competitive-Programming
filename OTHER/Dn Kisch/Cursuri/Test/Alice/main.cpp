#include <cstdio>

using namespace std;
int v[32];
int main()
{
    freopen("alice.in","r",stdin);
    freopen("alice.out","w",stdout);
    int n,k=0,h=0,a,b,c,cp,i;
    scanf("%d",&n);
    while(n)
    {
        v[++k]=n&1;
        n=n>>1;
    }
    int st=1,dr=k;
    while(st<=dr)
    {
        int aux=v[st];
        v[st]=v[dr];
        v[dr]=aux;
        st++,dr--;
    }
    cp=k;
    if(k&1)
    {
        for(i=cp/2+1; i<=cp-1; ++i)
            v[i]=v[i+1];
        h++;
        cp--;
    }
    int j;
    for(i=cp/2; i>1; --i)
    {
        if(v[i]==v[i+1])
            break;
        for(j=i; j<=cp-1; ++j)
            v[j]=v[j+1];
        cp--;
        for(j=i; j<=cp-1; ++j)
            v[j]=v[j+1];
        cp--;
        h+=2;
    }
    a=0;
    int p=1;
    for(i=cp; i>=1; --i)
    {
        a=a+v[i]*p;
        p=p<<1;
    }
    printf("%d\n",a);
    int dif=k-cp;
    b=0;
    p=1;
    for(i=cp; i>cp/2; --i)
    {
        b=b+v[i]*p;
        p=p<<1;
    }
    for(i=1; i<=dif/2; ++i)
    {
        b=b+p;
        p=p<<1;
    }
    if(dif&1)
        for(i=1; i<=dif/2+1; ++i)
            p=p<<1;
    else
        for(i=1; i<=dif/2; ++i)
            p=p<<1;
    for(i=cp/2; i>=1; --i)
    {
        b=b+v[i]*p;
        p=p<<1;
    }
    printf("%d\n",b);
c=0;
    p=1;
    for(i=cp; i>cp/2; --i)
    {
        c=c+v[i]*p;
        p=p<<1;
    }
    for(i=1; i<=dif/2; ++i)
        p=p<<1;
    if(dif&1)
        for(i=1; i<=dif/2+1; ++i)
            {
                c=c+p;
            p=p<<1;
            }
    else
        for(i=1; i<=dif/2; ++i)
            {
            c=c+p;
            p=p<<1;
            }
    for(i=cp/2; i>=1; --i)
    {
        c=c+v[i]*p;
        p=p<<1;
    }
    printf("%d",c);
    return 0;
}
