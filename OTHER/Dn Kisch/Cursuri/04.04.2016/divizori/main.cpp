#include <cstdio>
using namespace std;
inline long long cmmdc(long long a,long long b)
{
    long long r;
    while(b)
    {
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}
inline long long cmmmc(long long a,long long b)
{
    return a*b/cmmdc(a,b);
}
int main()
{
    freopen("divizori.in","r",stdin);
    freopen("divizori.out","w",stdout);
    int m,k,i;
    long long N,N1;
    scanf("%d%d",&m,&k);
    N=k+1;
    for(i=k+2;i<m;++i)
        N=cmmmc(N,i);
    N1=N+k;
    while(1)
    {
        if(N1%m==0)
        {
            printf("%lld\n",N1);
            return 0;
        }
        N1=N1+N;
    }
    return 0;
}
