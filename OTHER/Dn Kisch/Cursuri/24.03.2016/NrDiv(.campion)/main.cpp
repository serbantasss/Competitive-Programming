#include <cstdio>

using namespace std;
int main()
{
    freopen("nrdiv.in","r",stdin);
    freopen("nrdiv.out","w",stdout);
    int n,i;
    long long int x=0;
    scanf("%d",&n);
    for(i=1; i<=n; ++i)
    {
        scanf("%lld",&x);
        int d=2,e=0,nrdiv=1;
        while(1ll*d*d<=x && x>=1)
        {
            e=0;
            while(x%d==0)
            {
                x/=d;
                e++;
            }
            if(e)
                nrdiv=nrdiv*(e+1);
            d++;
        }
        if(x>1)
            nrdiv=nrdiv*2;
        printf("%d\n",nrdiv);
    }
    return 0;
}
