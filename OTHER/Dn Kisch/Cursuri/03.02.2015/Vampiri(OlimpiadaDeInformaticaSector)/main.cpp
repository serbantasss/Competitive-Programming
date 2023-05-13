#include <cstdio>
#include <cstdlib>
using namespace std;
int main()
{
    freopen("vampiri.in","r",stdin);
    freopen("vampiri.out","w",stdout);
    int n,x,af=0;
    char c;
    scanf("%d ",&n);
    for(int i=1;i<=n;++i)
    {
        scanf("%c%d",&c,&x);
        if(c=='S')
            af=af-x;
        if(c=='D')
            af=af+x;
    }
    if(af<0)
        printf("S%d",abs(af));
    else
        if(af>0)
           printf("D%d",abs(af));
        else
            printf("0");
    return 0;
}
