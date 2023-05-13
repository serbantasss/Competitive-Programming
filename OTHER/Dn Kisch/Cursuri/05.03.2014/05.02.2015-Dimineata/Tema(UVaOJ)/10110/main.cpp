#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    unsigned int n=1,i,lim;
    while(scanf("%lld",&n)&&n!=0)
    {
        lim=(int)sqrt((double)n);
        if(lim*lim==n)
        {
            printf("yes\n");
        }
        else
            printf("no\n");
    }
    return 0;
}
