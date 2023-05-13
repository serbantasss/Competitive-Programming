#include <cstdio>
#include <algorithm>
using namespace std;
int x[100005];
int main()
{
    freopen("prod3.in","r",stdin);
    freopen("prod3.out","w",stdout);
    int n,i,poz=0,p1,p2,neg;
    bool zero=0;
    scanf("%d",&n);
    for(i=1; i<=n; ++i)
    {
        scanf("%d",&x[i]);
        if (x[i]==0)
            zero=1;
        else
            if (x[i]>0)
                ++poz;
            else
                ++neg;
    }
    sort(x+1,x+n+1);
    if (!poz)
    {
        if (zero)
            printf("0 %d %d\n",x[1],x[2]);
         else
            printf("%d %d %d\n",x[n-2],x[n-1],x[n]);
    }
    else
        if (poz>=1 && poz<=2)
            printf("%d %d %d\n",x[1],x[2],x[n]);
        else
        {
            if (neg<=1)
                printf("%d %d %d\n",x[n],x[n-1],x[n-2]);
            else
            {
                p1=x[1]*x[2]*x[n];
                p2=x[n]*x[n-1]*x[n-2];
                if (p1<=p2)
                    printf("%d %d %d\n",x[n],x[n-1],x[n-2]);
                else
                    printf("%d %d %d\n",x[1],x[2],x[n]);
            }
        }
    return 0;
}
