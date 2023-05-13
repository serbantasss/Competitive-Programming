#include <cstdio>
#include <cmath>
using namespace std;
const int NMAX=1000000;
bool c[NMAX+5];
void ciur(int n)
{
    c[0]=c[1]=0;
    int lim,i,j;
    for(i=4;i<=n;i+=2)
        c[i]=1;
    lim=(int)sqrt((double)n);
    for(i=3;i<=lim;i+=2)
        if(c[i]==0)
          for(j=i*i;j<=n;j=j+2*i)
               c[j]=1;
}
int main()
{
    int n,i;
    long long np;
    scanf("%d",&n);
    ciur(n);
    np=1;
    printf("2 ");
    for(i=3;i<=n;i+=2)
        if(c[i]==0)
           np++,printf("%d ",i);
    return 0;
}
