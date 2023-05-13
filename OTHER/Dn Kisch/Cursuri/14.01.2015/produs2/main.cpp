#include <cstdio>

using namespace std;
const int NMAX=1000000;
int v[NMAX+5];
int main()
{
    freopen("produs2.in","r",stdin);
    freopen("produs2.out","w",stdout);
    int n,i,dr,st,p;
    long long prod,ans;
    scanf("%d%d",&n,&p);
    for(i=1;i<=n;++i)
        scanf("%d",&v[i]);
    ans=0;prod=1;
    for(dr=st=1;dr<=n;++dr)
    {
        prod=prod*v[dr];
        while(prod>=p && st<dr)
        {
            prod/=v[st];
            st++;
        }
        ans=ans+dr-st+1;
    }
    printf("%lld",ans);
    return 0;
}
