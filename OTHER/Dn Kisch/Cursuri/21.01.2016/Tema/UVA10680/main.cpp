#include <cstdio>

using namespace std;
int cmmmc(int a,int b)
{
    int r,ca,cb;
    r=a % b;
    cb=b;
    ca=a;
    while(r!=0)
    {
        ca=cb;
        cb=r;
        r=ca % cb;
    }
    return (a*b)/cb;
}
int main()
{
    //freopen("test.in","r",stdin);
    //freopen("test.ou","w",stdout);
    int n;
    long long p=1;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
            return 0;
        p=1;
        for(int i=1;i<=n;++i)
           p=cmmmc(p,i);
        while(p%10==0)
            p/=10;
        printf("%d\n",p%10);
    }
    return 0;
}
