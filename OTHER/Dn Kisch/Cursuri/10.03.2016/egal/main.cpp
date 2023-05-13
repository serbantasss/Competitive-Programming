#include <cstdio>
using namespace std;
int main()
{
    freopen("egal.in","r",stdin);
    freopen("egal.out","w",stdout);
    int n,i,max=0,a,b;
    long long ans=0;
    scanf("%d",&n);
    scanf("%d",&a);
    max=a;ans=0;
    for(i=2;i<=n;++i)
        {
        scanf("%d",&b);
        if(b>a)
           ans=ans+b-a;
         if(b>max)
            max=b;
        a=b;
        }
    if(b<max)
        ans=ans+max-b;
    printf("%lld",ans);
    return 0;
}
