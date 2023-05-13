#include <cstdio>

using namespace std;
int v[1001];
int main()
{
    freopen("fotbal.in","r",stdin);
    freopen("fotbal.out","w",stdout);
    int n,i,a,b;
    scanf("%d",&n);
    for(i=1; i<=n; ++i)
        scanf("%d",&v[i]);
    a=v[1];
    i=2;
    while(v[i]==0)
        a*=10,++i;
    for(; i<=n;)
    {
        b=0;
        do
        {
            b=b*10+v[i];
            i++;
        }
        while((b<=a || v[i]==0)&&i<=n);
        if(a<b)
            printf("%d ",a);
        else
            printf("%d",a);
        a=b;
    }
    printf("%d",a);
    return 0;
}
