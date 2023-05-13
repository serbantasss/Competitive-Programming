#include <cstdio>

using namespace std;
int v[10001];

int main()
{
    int n;
    scanf("%d",&n);
    int i=1;
    for(i=1;i<=n;++i)
        scanf("%d",&v[i]);
    for(i=1;i<=n-1;++i)
        v[i]=v[i+1];
    n--;
    for(i=1;i<=n;++i)
        printf("%d ",v[i]);
    return 0;
}
