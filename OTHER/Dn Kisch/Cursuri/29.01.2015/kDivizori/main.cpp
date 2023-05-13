#include <cstdio>
using namespace std;
int main()
{
    int k,i;
    scanf("%d",&k);
    unsigned long long y=1;
    for(i=1;i<k;++i)
        y*=2;
    printf("%d",y);
    return 0;
}
