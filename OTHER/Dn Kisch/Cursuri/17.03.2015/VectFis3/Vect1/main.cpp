#include <cstdio>

using namespace std;
int v[101];
int main()
{
    freopen("vect1.in","r",stdin);
    freopen("vect1.out","w",stdout);
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
        scanf("%d",&v[i]);
    for(i=2;i<=n;i+=2)
        printf("%d ",v[i]);
    printf("\n");
    for(i=1;i<=n;i+=2)
        printf("%d ",v[i]);
    return 0;
}
