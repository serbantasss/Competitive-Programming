#include <cstdio>

using namespace std;
int v[10001];

int main()
{
    int n,k,a;
    scanf("%d%d%d",&n,&k,&a);
    int i=1;
    for(i=1;i<=n;++i)
        scanf("%d",&v[i]);
    for(i=n+1;i>=k;--i)
        v[i]=v[i-1];
    n++;
    v[k]=a;
    for(i=1;i<=n;++i)
        printf("%d ",v[i]);
    return 0;
}
