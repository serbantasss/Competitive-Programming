#include <cstdio>

using namespace std;
const int NMAX=40000;
int v[NMAX+5],st[NMAX+5];
int main()
{
    freopen("maxim.in","r",stdin);
    freopen("maxim.out","w",stdout);
    int a,b,k,i,c,top,n=0,nrc,aux;
    scanf("%d%d%d",&a,&b,&k);
    for(;a<=b;++a)
    {
        c=a;
        nrc=n;
        do
        {
            v[++n]=c%10;
            c/=10;
        }while(c);
        for(i=1;i<=(n-nrc+1)/2;++i)
        {
        aux=v[i+nrc];
        v[i+nrc]=v[n-i+1];
        v[n-i+1]=aux;
        }
    }
    top=1;st[top]=v[1];
    for(i=2;i<=n;++i)
    {
        while(top>0 && k && v[i]>st[top])
            top--,k--;
        st[++top]=v[i];
    }
    for(i=1;i<=top-k;++i)
        printf("%d",st[i]);
    return 0;
}
