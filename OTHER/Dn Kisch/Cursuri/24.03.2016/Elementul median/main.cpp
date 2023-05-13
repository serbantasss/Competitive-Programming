#include<cstdio>
#include <algorithm>
#include <cstdlib>
using namespace std;
int v[3000001];
int main()
{
    freopen("median.in","r",stdin);
    freopen("median.out","w",stdout);
    int n,i;
    scanf("%d",&n);
    for(i=1; i<=n; ++i)
        scanf("%d", &v[i]);
    sort(v+1,v+n+1);
    int aux,s,m;
    s=0;
    m=(n+1)/2;
    aux=v[m];
    for(i=1;i<=n;++i)
        s=s+abs(v[m]-v[i]);
    if(n%2==1)
        printf("%d",v[m]);
    else
        printf("%d %d",v[m],v[m+1]);
    return 0;
}
