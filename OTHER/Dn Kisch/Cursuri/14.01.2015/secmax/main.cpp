#include <cstdio>

using namespace std;
const int NMAX=25000;
int v[NMAX+5],R[NMAX+5],L[NMAX+1];
int main()
{
    freopen("secmax.in","r",stdin);
    freopen("secmax.out","w",stdout);
    int n,i,ans;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
        scanf("%1d",&v[i]);
    L[1]=1;
    for(i=2;i<=n;++i)
        if(v[i]>v[i-1])
            L[i]=L[i-1]+1;
        else
            L[i]=1;
    R[1]=1;
    for(i=n-1;i>=1;--i)
        if(v[i]>v[i+1])
            R[i]=R[i+1]+1;
        else
            R[i]=1;
    ans=0;
    for(i=1;i<=n;++i)
        ans=ans+(L[i]-1)*(R[i]-1);
    printf("%d",ans);
    return 0;
}
