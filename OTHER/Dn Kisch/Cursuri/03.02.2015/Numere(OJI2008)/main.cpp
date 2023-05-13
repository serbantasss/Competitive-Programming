#include <cstdio>
using namespace std;
int main()
{
    freopen("nr.in","r",stdin);
    freopen("nr.out","w",stdout);
    int n,k,p,a,b,s=5,nr=0,u;
    scanf("%d %d %d",&n,&k,&p);
    a=1;
    b=2;
    s=2;
    if(k==a)
        nr++;
    else if(k==b)
        nr++;
    for(int i=3; i<=n; ++i)
    {
        u=a+b;
        u%=10;
        if(u==2 || u==3 || u==5 || u==7)
            s+=u;
        if(u==k)
            nr++;
        a=b;
        b=u;
    }
    printf("%d\n",s);
    printf("%d\n",nr);
    if(p%60<=2)
        printf("%d",p);
    else if(p%60==0)
        printf("1");
    else
    {
        p=p%60;
        a=1;
        b=2;
        for(int i=3; i<=p; i++)
        {
            u=(a+b)%10;
            a=b;
            b=u;
        }
        printf("%d",b);
    }
    return 0;
}
