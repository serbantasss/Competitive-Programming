#include <cstdio>

using namespace std;
int f[10];
int main()
{
    int n,i,x;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
        {
            scanf("%d",&x);
            do
            {
                f[x%10]++;
                x/=10;
            }while(x);
        }
    for(i=0;i<=9;++i)
        if(f[i]<n)
           printf("%d ",i);
    return 0;
}
