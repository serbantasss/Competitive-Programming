#include <cstdio>
#include <cctype>
#include <cstring>
using namespace std;

int main()
{
    freopen("panglica.in","r",stdin);
    freopen("panglica.out","w",stdout);
    int n,c,v[10001],i,cpy[10001],x=0,y=0;
    scanf("%d",&n);
    scanf("%d",&c);
    for(i=1;i<=n;++i)
        {
            scanf("%d",&v[i]);
            cpy[i]=v[i];
        }
    for(i=n;i>=2;--i)
        if(cpy[1]==cpy[i])
           {
            x=i-1+1;
            break;
           }
    for(i=1;i<=n;i++)
        cpy[i]=v[i];
    for(i=2;i<=n;++i)
        if(cpy[n]==cpy[i])
           {
            y=n-i+1;
            break;
           }
    if(x>y)
        {
            printf("%d\n",x);
            printf("%d\n",v[1]);
            printf("?\n");
            printf("k\n");
          }
    else
         {
            printf("%d\n",y);
            printf("%d\n",v[n]);
            printf("%d\n",1);
            printf("%d\n",0);
         }

    return 0;
}
