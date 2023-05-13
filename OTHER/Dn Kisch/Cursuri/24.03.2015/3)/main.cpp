#include <cstdio>

using namespace std;
int v[10001];
///Sa se elimine al k-lea element dintr-un vector;
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int i=1;
    for(i=1;i<=n;++i)
        scanf("%d",&v[i]);
    for(i=k;i<=n-1;++i)
        v[i]=v[i+1];
    n--;
    for(i=1;i<=n;++i)
        printf("%d ",v[i]);
    return 0;
}
