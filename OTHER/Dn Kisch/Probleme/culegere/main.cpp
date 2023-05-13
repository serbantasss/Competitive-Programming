#include <cstdio>

using namespace std;
long p,n,put=1,s,t;
int main()
{
    freopen("culegere.in","r",stdin);
    freopen("culegere.out","w",stdout);
    scanf("%d%d",&p,&n);
    int u,cp,i,f=0,m;
    u=p*(p+1)/2;
    cp=u;
    do
    {
        cp/=10;
        f++;
    }while(cp);
    put=1;
    for(i=1;i<f;++i)
    {
        t=t+put*i;
        put*=10;
    }
    t*=9;
    t+=f*(u-put+1);
    printf("%d\n",t);
    s=0;m=1;
    while(s+m<n)
        s+=m,++m;
    printf("%d",m);
    return 0;
}
