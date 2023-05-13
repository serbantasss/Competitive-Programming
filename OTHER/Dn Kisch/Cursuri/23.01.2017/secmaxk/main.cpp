#include <cstdio>

using namespace std;
long long int output;
int main()
{
   int n,i,k,x,last=0;
   scanf("%d%d",&n,&k);
   for(i=1;i<=n;++i)
   {
       scanf("%d",&x);
       if(x>k)
       {
            output=output+(long long int)(i-last)*(n-i+1);
           last=i;
        }
   }
   printf("%lld",output);
    return 0;
}
