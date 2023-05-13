#include <cstdio>
#include <cmath>
using namespace std;

int nr, nrmin, nrmax;
const int NMAX=10000000;
bool c[NMAX+5];
void ciur(int n)
{
    c[0]=c[1]=1;
    int lim,i,j;
    for(i=4;i<=n;i+=2)
        c[i]=1;
    lim=(int)sqrt((double)n);
    for(i=3;i<=lim;i+=2)
        if(c[i]==0)
          for(j=i*i;j<=n;j=j+2*i)
               c[j]=1;
}int main()
{
    freopen("extraprime.in","r",stdin);
    freopen("extraprime.out","w",stdout);
    int i, a, b;
    scanf("%d%d",&a,&b);
    nr = 0;
    ciur(b);
    for (i = a; i <= b; ++i)
    {

        int ci=i,aux,t = 1;
        bool ok=true;
        while (t < ci)
        {
            aux = ci / 10 / t * t + ci % t;
            if (c[aux])
            {
                ok=false;
                break;
            }
            t *= 10;
        }
        if (!c[i] && ok==true)
        {
            ++nr;
            if (nr == 1)
                nrmin = i ;
            nrmax = i;
        }
    }
    printf("%d\n%d\n%d\n",nr,nrmin,nrmax);
    return 0;
}
