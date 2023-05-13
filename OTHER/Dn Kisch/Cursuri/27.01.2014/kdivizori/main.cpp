#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    /**Determinati cel mai mic numar care are exact k divizori*/
    int n,i,k,lim,nrdiv;
    scanf("%d",&k);
    for(n=1;; ++n)
    {
        lim=(int)sqrt((double)n);
        nrdiv=0;
        for(i=1; i<=lim; ++i)
            if(n%i==0)
                nrdiv+=2;
        if(lim*lim==n)
            --nrdiv;
        if(nrdiv==k)
        {
            printf("%d\n",n);
            break;
        }
    }
    return 0;
}
