#include <cstdio>

using namespace std;
int v[10001];

int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int i=1;
    for(i=1;i<=n;++i)
        scanf("%d",&v[i]);
    for(i=n+1;i>=1;--i)
        v[i]=v[i-1];
    n++;
    v[1]=k;
    for(i=1;i<=n;++i)
        printf("%d ",v[i]);
    return 0;
}
