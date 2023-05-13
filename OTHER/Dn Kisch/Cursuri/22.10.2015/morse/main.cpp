#include <cstdio>
#include <cmath>
using namespace std;
int c[30001];
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
int v[20];
int main()
{
    freopen("morse.in","r",stdin);
    freopen("morse.out","w",stdout);
    int a,b,i,n,s,j;
    scanf("%d %d",&a,&b);
    ciur(b);
    for(i=a; i<=b; ++i)
        if(i%2==1)
        {
            n=i;
            j=1;
            while(n)
            {
                if(n%2==1)
                    v[j]=1;
                j++;
                n=n/2;
            }
            n=j-1;
            for(j=n; j>=1; --j)
            {
                if(v[j]==0)
                    printf(".");
                else
                    printf("-");
                v[j]=0;
            }
            printf(" ");
        }
    return 0;
}
