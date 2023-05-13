#include <cstdio>

using namespace std;
int v[6];
int main()
{
    freopen("elfi.in","r",stdin);
    freopen("elfi.out","w",stdout);
    long long n,p,i,j;
    scanf("%lld",&n);
    p=1;
    i=1;
    while(p<n)
    {
        p=1LL*p*2;
        if(p>n)
            break;
        i++;
    }
    printf("%d\n",i);
    p=1;
    for(j=1;j<=i;++j)
        {printf("%lld ",p);
        p=1LL*p*2;}
    return 0;
}
