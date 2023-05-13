#include <cstdio>
#include <algorithm>
using namespace std;
int v[100005];
int main()
{
    freopen("prod3.in","r",stdin);
    freopen("prod3.out","w",stdout);
    int n;
    for(int i=1;i<=n;++i)
        scanf("%d",&v[i]);
    sort(v+1,v+n+1);
    for(int i=n;i>=n-3;--i)
        printf("%d ",v[i]);
    return 0;
}
