#include <cstdio>

using namespace std;

int main()
{
    freopen("porumb.in","r",stdin);
    freopen("porumb.out","w",stdout);
    int n,x,i,nragri,cp,uporumb;
    scanf("%d%d",&n,&x);
    printf("%d\n",(n+1)/2);
    cp=n;
    nragri=0;
    while(cp>0)
    {
        nragri++;
        cp/=2;
    }
    printf("%d\n",nragri);
    int ordinetrecere=1;
    while(x%2==0)
    {
        x=x/2;
        ordinetrecere++;
    }
    printf("%d\n",ordinetrecere);
    uporumb=1;
    while(uporumb<=n>>1)
        uporumb=uporumb<<1;
    printf("%d",uporumb);
    return 0;
}
