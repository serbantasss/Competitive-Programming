#include <cstdio>
#include <cmath>
using namespace std;
const int NMAX=1000000;
bool c[NMAX+5];
void ciur(int n)
{
    c[0]=c[1]=1;
    int lim,i,j;
    for(i=4; i<=n; i+=2)
        c[i]=1;
    lim=(int)sqrt((double)n);
    for(i=3; i<=lim; i+=2)
        if(c[i]==0)
            for(j=i*i; j<=n; j=j+2*i)
                c[j]=1;
}
int main()
{
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
    ciur(NMAX);
    int i,n=40,ok,op1,op2;
    while(scanf("%d",&n)==1 && n>=6 && n<=1000000)
    {
        if(n==0)
            break;
        else
        {
            for(i=2; i<n; i++)
            {
                ok=0;
                op1=n-i;
                if(c[op1]==0)
                {
                    if(c[i]==0)
                    {
                        op2=i;
                        ok=1;
                        break;
                    }
                }
            }
            if(ok==1)
                printf("%d = %d + %d\n",n,op2,op1);
            else
                printf("Goldbach's conjecture is wrong.\n");
        }
    }
    return 0;
}
