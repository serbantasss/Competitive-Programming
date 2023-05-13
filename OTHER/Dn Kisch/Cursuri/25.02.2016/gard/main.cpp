#include <cstdio>

using namespace std;

int main()
{
    freopen("gard.in","r",stdin);
    freopen("gard.out","w",stdout);
    int n,i,a=0,b=0;
    long long ans=0;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        scanf("%d",&b);
        if(b>a)
            ans=ans+(b-a);
        a=b;
    }
    printf("%d",ans);
    return 0;
}
