#include <cstdio>
using namespace std;
int main()
{
    freopen("vect4.in","r",stdin);
    freopen("vect4.out","w",stdout);
    int n,i,nr=1,x;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
        {
        scanf("%d",&x);
        if(x>0)
            printf("%d ",x);
        }
    return 0;
}
