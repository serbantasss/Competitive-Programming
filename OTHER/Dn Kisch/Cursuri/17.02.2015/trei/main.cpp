#include <cstdio>
using namespace std;
int s;
int main()
{
    freopen("trei.in","r",stdin);
    freopen("trei.out","w",stdout);
    int n,n1=0,n2=0,i,modulo3,p11=-1,p12=-1,p21=-1,p22=-1,x;
    scanf("%d",&n);
    for(i=1; i<=n; ++i)
    {
        scanf("%d",&x);
        if (x%3==1)
        {
            if (p11==-1)
                p11=x;
            else
                if (p12==-1)
                    p12=x;
            ++n1;
        }
        else
            if (x%3==2)
                {
                    if (p21==-1)
                        p21=x;
                    else
                        if (p22==-1)
                            p22=x;
                    ++n2;
                }
    }
    modulo3=(n1+(n2<<1))%3;
    if (modulo3==0)
        printf("%d\n\n",n);
    else
        if (modulo3==1)
        {
            if (n1>=1)
            {
                printf("%d\n%d\n",n-1,p11);
                return 0;
            }
            else
                printf("%d\n%d %d\n",n-2,p21,p22);
        }
        else
        {
            if (n2>=1)
            {
                printf("%d\n%d\n",n-1,p21);
                return 0;
            }
            else
                printf("%d\n%d %d\n",n-2,p11,p12);
        }
    return 0;
}
