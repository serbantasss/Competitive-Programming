#include <cstdio>

using namespace std;

int main()
{
    freopen("pizza.in","r",stdin);
    freopen("pizza.out","w",stdout);
    int n,a,b,p=0,i,nr14=0,nr34=0,nr12=0,r14;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        scanf("%d/%d",&a,&b);
        if(b==4)
            {if(a==1)
              nr14++;
           else
              nr34++;}
              else
                nr12++;
    }
    p=nr34;
    r14=nr34;
    p=p+nr12/2;
    if(nr12%2==1)
    {
        p++;
        r14=r14+2;
    }
    if(nr14>r14)
    {
        int dif=nr14-r14;
        p=p+dif/4;
        if(dif%4==0)
            p++;
    }
    printf("%d",p);
    return 0;
}
