#include <cstdio>
#include <algorithm>
using namespace std;
int v[200];
int main()
{
    freopen("timp.in","r",stdin);
    freopen("timp.out","w",stdout);
    int n,k,i,j;
    scanf("%d%d",&n,&k);
    if(n<=k)
    {
        int maxx=0,x;
        for(i=1; i<=n; ++i)
        {
            scanf("%d",&x);
            if(x>maxx)
                maxx=x;
        }
        printf("%d",maxx);
        return 0;
    }
    if(n%k==0)
    {
        for(j=1; j<=k; ++j)
            {
                int x;
                scanf("%d",&x);
                v[j]+=x;
            }
            sort(v+1,v+k+1);
        for(i=1; i<=n/k-1; ++i)
        {
            for(j=1; j<=k; ++j)
            {
                int x;
                scanf("%d",&x);
                v[j]+=x+1;
            }
            sort(v+1,v+k+1);
        }
    }
    else
    {
        for(j=1; j<=k; ++j)
            {
                int x;
                scanf("%d",&x);
                v[j]+=x;
            }
            sort(v+1,v+k+1);
        for(i=1; i<=n/k-1; ++i)
        {
            for(j=1; j<=k; ++j)
            {
                int x;
                scanf("%d",&x);
                v[j]+=x+1;
            }
            sort(v+1,v+k+1);
        }
        for(i=1;i<=n%k;++i)
        {
            int x;
            scanf("%d",&x);
            v[i]+=x+1;
        }
        sort(v+1,v+n-k+1);
    }
    printf("%d",v[1]);
    return 0;
}
