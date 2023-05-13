#include <cstdio>

using namespace std;
int v[100001];
int main()
{
    freopen("piramide.in","r",stdin);
    freopen("piramide.out","w",stdout);
    int n,x,k,s=3,nrp=1,i;
    scanf("%d%d%d",&n,&x,&k);
    for(i=1;i<=k;++i)
        scanf("%d",&v[i]);
    while(s<=n)
    {
        nrp++;
        s=s+(s+1)*(s+2);
    }
    printf("%d",nrp);
    return 0;
}
