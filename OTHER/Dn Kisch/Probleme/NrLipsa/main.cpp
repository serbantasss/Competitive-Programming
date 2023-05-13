#include <cstdio>
using namespace std;
int f[1000];
int main()
{
    freopen("nrlipsa.in","r",stdin);
    freopen("nrlipsa.out","w",stdout);
    int x,a,b,nr=2;
    a=b=0;
    while(scanf("%d",&x)!=EOF)
        if(x>=100 && x<=999)
            f[x]++;
    for(int i=999; i>=100; --i)
    {
        if(f[i]==0)
        {
            printf("%d ",i);
            nr--;
        }
        if(nr==0)
            break;
    }
    if(nr>0)
    {
        printf("NU");
    }
    return 0;
}
