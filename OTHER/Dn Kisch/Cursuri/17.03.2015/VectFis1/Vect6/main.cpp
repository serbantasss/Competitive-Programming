#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    freopen("vect6.in","r",stdin);
    freopen("vect6.out","w",stdout);
    int n,i,nr=1,x;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
        {
        scanf("%d",&x);
        bool prime=true;
        if(x<2)
            prime=false;
        if(x%2==0 && x>2)
            prime=false;
        for(int d=3;d*d<=x;++d)
            if(x%d==0)
        {
            prime=false;
            break;
        }
        if(prime==true)
            printf("%d ",x);
        }
    return 0;
}
