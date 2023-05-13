#include <cstdio>

using namespace std;
bool cmp(int n)
{
    return n%2;
}
int main()
{
    int n,i,x,nri,nrp,sp,si;
    scanf("%d",&n);
    sp=si=nri=nrp=0;
    for(i=1;i<=n;++i)
        {
        scanf("%d",&x);
        if(cmp(x)==true)
            nrp++,sp+=x;
        else
            nri++,si+=x;
        }
    if(nrp)
        printf("%d",sp/nrp);
    else
        printf("Nu exista nr pare\n");
    if(nri)
        printf("%d\n",si/nri);
    else
        printf("Nu exista nr impare");
    return 0;
}
