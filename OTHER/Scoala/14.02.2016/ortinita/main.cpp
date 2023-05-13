#include <cstdio>
using namespace std;
bool f[10];
int v[10];
int main()
{
    freopen("orintia.in","r",stdin);
    freopen("orintia.out","w",stdout);
    int n,i,x,min=10;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        scanf("%d",&v[i]);
    }
    for(i=1;i<=n;++i)
    {
        v[i]=(v[i]+n-i)%10;
        f[v[i]]=1;
        if(v[i]>0 && min>v[i])
           min=v[i];
    }
    printf("%d",min);
    if(f[0]==1)
        printf("0");
    for(i=min+1;i<=9;++i)
        if(f[i])
            printf("%d",i);
    return 0;
}
