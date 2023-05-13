#include <cstdio>

using namespace std;
bool cmp(int n)
{
    return n%2;
}
int main()
{
    freopen("vect2.in","r",stdin);
    freopen("vect2.out","w",stdout);
    int n,i,x,nri,nrp;
    scanf("%d",&n);
    nri=nrp=0;
    for(i=1;i<=n;++i)
        {
        scanf("%d",&x);
        if(cmp(x)==true)
            nrp++;
        else
            nri++;
        }
    if(nrp)
        printf("%d nr pare\n",nrp);
    else
        printf("Nu exista nr pare\n");
    if(nri)
        printf("%d nr impare\n",nri);
    else
        printf("Nu exista nr impare");
    return 0;
}
