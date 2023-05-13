#include <cstdio>

using namespace std;
long long int ans,n;
int main()
{
    freopen("patrat.in","r",stdin);
    freopen("patrat.out","w",stdout);
    scanf("%d",&n);
    ans=1ll*(n+1)*(n+1)*(n+2)*(n+2)/4;
    ans=ans-1ll*n*(n+1)*(n+2)*(n+3)/8;
    ans=ans%30103;
    printf("%lld",ans);
    return 0;
}
