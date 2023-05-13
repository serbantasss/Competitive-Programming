#include <cstdio>
#include <cmath>
using namespace std;
bool prim(int x)
{
    if(x==0 || x==1)
        return 0;
    if(x>2 && x%2==0)
        return 0;
    for(int d=3;d*d<=x;++d)
        if(x%d==0)
            return 0;
    return 1;
}
int main()
{
    freopen("cuburi.in","r",stdin);
    freopen("cuburi.out","w",stdout);
    int n,cnt,x,k;
    long long int s;
    scanf("%d",&k);
    n=k*(k+1)/2;
    cnt=1;
    s=2;
    for(x=3;cnt<n;x+=2)
        if(prim(x))
            s+=x,cnt++;
    printf("%I64d",s);
    return 0;
}
