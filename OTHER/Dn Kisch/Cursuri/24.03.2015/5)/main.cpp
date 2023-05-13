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
    n++;
    v[n]=k;
    for(i=1;i<=n;++i)
        printf("%d ",v[i]);
    return 0;
}
