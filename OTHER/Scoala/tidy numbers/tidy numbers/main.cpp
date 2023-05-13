#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
    freopen("1.in","r",stdin);
    freopen("1.out","w",stdout);
    int t,ti;
    scanf("%d",&t);
    for(ti=1;ti<=t;ti++)
    {
        long long n;
        int i;
        scanf("%lld",&n);
        int v[40],cif=0;
        do
        {
            v[++cif]=n%10;
            n/=10;
        } while(n>0);
//       caut 0;
        for(i=1;i<=cif/2;i++)
            swap(v[i],v[cif-i+1]);
        bool ok=1;
        printf("Case #%d: ",ti);
        while(ok)
        {
            
            ok=0;
            for(i=1;i<cif;++i)
                if(v[i]>v[i+1])
                    break;
            if(i<cif)
            {
                v[i++]--;
                for(;i<=cif;++i)
                    v[i]=9;
                ok=1;
            }
        }
        for(i=1;i<=cif;++i)
            if(v[i]!=0)
                printf("%d",v[i]);
        printf("\n");
    }
    return 0;
}
