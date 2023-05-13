#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    freopen("vect5.in","r",stdin);
    freopen("vect5.out","w",stdout);
    int n,i,nr=1,x;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
        {
        scanf("%d",&x);
        if((int)sqrt((double)x)==sqrt((double)x))
            printf("%d ",x);
        }
    return 0;
}
