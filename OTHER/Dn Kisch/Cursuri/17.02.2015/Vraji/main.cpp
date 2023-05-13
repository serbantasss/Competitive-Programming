#include <cstdio>

using namespace std;
int cmmdc(int a,int b)
{
    int r;
    while(b)
    {
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}
int v[101],p[101],c[101];
int main()
{
    freopen("vraji.in","r",stdin);
    freopen("vraji.out","w",stdout);
    int n,i,max=0;
    scanf("%d",&n);
    if(n==1)
    {
        scanf("%d%d",&p[1],&v[1]);
        c[1]=v[1]*p[1];
        printf("%d\n%d",c[1],c[1]);
    }
    else
    {
    for(int i=1;i<=n;++i)
         {
             scanf("%d%d",&p[i],&v[i]);
             if(max<v[i]*p[i])
                max=v[i]*p[i];
            c[i]=v[i]*p[i];
         }
    printf("%d\n",max);
    int a,b,cm;
    a=c[1];
    for(int i=2;i<=n;++i)
    {
        b=c[i];
        cm=cmmdc(a,b);
        a=cm;
    }
    printf("%d",cm);
    }
    return 0;
}
