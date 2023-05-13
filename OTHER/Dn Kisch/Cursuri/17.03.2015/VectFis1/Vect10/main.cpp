#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    freopen("vect10.in","r",stdin);
    freopen("vect10.out","w",stdout);
    int n,i,nr=1,x,j;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        for(j=1;j<=i;++j)
            printf("%d ",j);
    }
    return 0;
}
