#include <cstdio>
#include <cmath>
using namespace std;
int c[10],v[10];
int main()
{
    int n,i,nrc=0,j;
    scanf("%d",&n);
    do
    {
        nrc++;
        v[nrc]=n%10;
        c[nrc]=n%10;
        n/=10;
    }
    while(n>0);
    bool sw=false;
    for(i=1;i<=nrc;i++)
    {
       for(j=i;j<=nrc-1;++j)
        c[j]=c[j+1];
       int nr=0;
       for(j=nrc-1;j>=1;--j)
          nr=nr*10+c[j];
       if(sqrt((double)nr)==(int)sqrt((double)nr))
        sw=true,n=nr;
        else
          for(j=1;j<=nrc;++j)
               c[j]=v[j];
    }
    if(sw)
        printf("%d",n);
    else
        printf("imposibil");
    return 0;
}
