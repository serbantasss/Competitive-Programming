#include <fstream>
#include <cmath>
#include <algorithm>
using namespace std;
int f[10005];
int main()
{
    freopen("roci.in","r",stdin);
    freopen("roci.out","w",stdout);
    int n,i,nr=0,x,max=-12323;
    scanf("%d",&n);
    for(i=1; i<=n; ++i)
    {
        scanf("%d",&x);
        if(max<x)
            max=x;
        f[x]++;
        if(f[x-1]>0)
            f[x-1]--;
    }
    for(i=1; i<=max; ++i)
        nr+=f[i];
    printf("%d",nr);
    return 0;
}

