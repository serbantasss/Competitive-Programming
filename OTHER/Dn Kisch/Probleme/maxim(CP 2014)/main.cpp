#include <cstdio>

using namespace std;
int v[6];
int main()
{
    freopen("date.in","r",stdin);
    freopen("date.out","w",stdout);
    int n,k,i;
    long long pmax=0;
    scanf("%d%d",&n,&k);
    for(i=1;i<=k;++i)
        v[i]=i;
    n=n-k*(k+1)/2;
    i=k;
    while(n>0)
    {
        v[i]++;
        n--;
        if(n==0)
            break;
        else
            i--;
        if(i==0)
            i=k;
    }
    for(i=1;i<=k;++i)
        pmax=pmax*v[i];
    printf("%1lld",pmax);
    return 0;
}
