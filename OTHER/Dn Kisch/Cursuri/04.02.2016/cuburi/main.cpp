#include <cstdio>
#include <cmath>
using namespace std;
const int NMAX=1000000;
bool c[NMAX+5];
void ciur()
{
    c[0]=c[1]=1;
    int lim,i,j;
    for(i=4;i<=NMAX;i+=2)
        c[i]=1;
    lim=(int)sqrt((double)NMAX);
    for(i=3;i<=lim;i+=2)
        if(c[i]==0)
          for(j=i*i;j<=NMAX;j=j+2*i)
               c[j]=1;
}
int main()
{
    freopen("cuburi.in","r",stdin);
    freopen("cuburi.out","w",stdout);
    int n,i=2,x=3;
    long long s=2;
    scanf("%d",&n);
    ciur();
    for(i=1;i<=n*(n+1)/2;++i)
    {
        if(c[x]==0)
            s+=x;
        x+=2;
    }
    printf("%d",s);
    return 0;
}
