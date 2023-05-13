#include <cstdio>
#define intra "date.in"
#define iesi "date.out"
using namespace std;

int main()
{
    freopen(intra,"r",stdin);
    freopen(iesi,"w",stdout);
    int f,x,k,z,t,i,sem=0,nrf;
    scanf("%d%d%d%d",&f,&x,&k,&z);
    nrf=f;
    for(i=1;i<=z;++i)
    {
    nrf+=sem;
    sem=x*nrf;
    if(i>=k)
        nrf-=f,f=nrf-f;
    }
    printf("%d",nrf);
    return 0;
}
