#include <cstdio>

using namespace std;
bool cmp(int n)
{
    return n%2;
}
int main()
{
    int n,i,x,pp,pi,nri=0,nrp=0;
    scanf("%d",&n);
    pp=pi=1;
    for(i=1;i<=n;++i)
        {
        scanf("%d",&x);
        if(cmp(x)==true)
            nrp=1,pp*=x;
        else
            nri=1,pi*=x;
        }
    if(nrp)
        printf("%d\n",pp);
    else
        printf("Nu exista nr pare\n");
    if(nri)
        printf("%d\n",pi);
    else
        printf("Nu exista nr impare");
    return 0;
}
