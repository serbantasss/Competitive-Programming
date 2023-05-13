#include <cstdio>
#include <cmath>
using namespace std;
const int NMAX=100000;
bool c[NMAX+5];
int prime[10000],np=0;
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
    freopen("sprime.in","r",stdin);
    freopen("sprime.out","w",stdout);
    int n,i,j,k,pos=0;
    scanf("%d",&n);
    ciur(100000);
    np=1;prime[1]=2;
    for(i=3;i<=100000;i+=2)
        if(!c[i])
          prime[++np]=i;
    for(i=1;i<np;++i)
        for(j=i;j<np && n-prime[i]-prime[j]>=prime[j];++j)
              if(!c[n-prime[i]-prime[j]])
                  pos++;
    printf("%d",pos);
    return 0;
}
