#include <cstdio>

using namespace std;
int main()
{
    freopen("covor.in","r",stdin);
    freopen("covor.out","w",stdout);
    int n,p,k,i,c;
    scanf("%d%d%d",&k,&n,&p);
    for(i=1;2*i*(i+1)-(i-1)<=k;++i);
    --i;
    if(p==1)
      printf("%d ",i);
    else
    {
    if(n> 2*i*(i+1)-(i-1))
        printf("0");
    else{
    p=1;
       c=1+i*(i+1);
       if(n<=c)
       {
            for(p=1;p*(p+1)+1<n;++p);
            printf("%d",p);
        }
         else
         { p=i;
           for(p=i;(c+2*p-1)<n;--p)
           {
               c=c+2*p-1;
           }
           printf("%d",p);
         }
         }
       }
    return 0;
}
