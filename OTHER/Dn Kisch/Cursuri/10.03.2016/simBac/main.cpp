#include <cstdio>
using namespace std;
bool f1[1001],f2[1001];
int main()
{
    freopen("sim.in","r",stdin);
    freopen("sim.out","w",stdout);
    int n,i,x;
    while(scanf("%d",&n)!=EOF)
    {
        x=n%1000;
        if(n>999) f1[x]=1;
        if(n>=100 && n<=999 && f1[n]==1) f2[n]=1;
    }
    for(i=100;i<=999;++i) if(f2[i]) printf("%d ",i);
    return 0;
}
