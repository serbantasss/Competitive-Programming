#include <cstdio>
#include <algorithm>
#define LMAX 10001
using namespace std;
int n,v[LMAX];
int main()
{
    freopen("pozitie.in","r",stdin);
    freopen("pozitie.out","w",stdout);
    scanf("%d",&n);
    for(int i;i<=n;++i)
      scanf("%d",&v[i]);
    return 0;
}
