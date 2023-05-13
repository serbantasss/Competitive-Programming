#include <cstdio>
#include <algorithm>
using namespace std;
int v[200005],n;
bool iese(int zile)
{
    for(int i=n;i>=n-zile+1;--i)
        if((zile-i+1)*(zile-i+2)/2>v[i])
            return 0;
    return 1;
}
int main()
{
    freopen("lumanari.in","r",stdin);
    freopen("lumanari.out","w",stdout);
    int i,j;
    long long s=0,x,k;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
        scanf("%d",&v[i]);
    sort(v+1,v+n+1);
    int st=0,dr=n,mid;
    if(iese(n))
    {
        printf("%d",n);
        return 0;
    }
    while(st<dr)
    {
        mid=(st+dr)/2;
        if(iese(mid))
            st=mid;
        else
            dr=mid;
    }
    printf("%d",st);
    return 0;

}
