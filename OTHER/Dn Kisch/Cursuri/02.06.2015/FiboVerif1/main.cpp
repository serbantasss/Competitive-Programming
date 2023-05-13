#include <cstdio>

using namespace std;
int f[47];
void constr()
{
    f[1]=f[2]=1;
    for(int i=3;i<=46;++i)
        f[i]=f[i-1]+f[i-2];
}
bool fibo(int n)
{
    for(int i=2;i<=46;++i)
        if(n==f[i])
           return 1;
    return 0;
}
int main()
{
    freopen("fiboverif1.in","r",stdin);
    freopen("fiboverif1.out","w",stdout);
    int n,i,x;
    scanf("%d",&n);
    constr();
    for(i=1;i<=n;++i)
    {
      scanf("%d",&x);
      if(fibo(x))
            printf("%d ",x);
    }
    return 0;
}
