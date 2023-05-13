#include <cstdio>

using namespace std;

int main()
{
    freopen("bancnota.in","r",stdin);
    freopen("bancnota.out","w",stdout);
    int n,s=0,p=10000,j=0,cn;
    scanf("%d",&n);cn=n;
    while(p>1)
    {if(n/p>0)
        {
        if(n%p>p/2)
        {
            s=s+n/p+1;
            j=j+(n/p+1)*p;
        }
        else
        {
            s=s+n/p;
            j=j+(n/p)*p;
        }
        n%=p;
        }
    p/=10;
    }
    n=cn;
    if(j>n)
        s=s+(j-n);
    printf("%d",s);
    return 0;
}
