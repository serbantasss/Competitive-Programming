#include <cstdio>

using namespace std;
bool cmp(int n)
{
    return n%2;
}
int main()
{
    int n,i,x,sp,si;
    scanf("%d",&n);
    sp=si=0;
    for(i=1;i<=n;++i)
        {
        scanf("%d",&x);
        if(cmp(x)==true)
            sp+=x;
        else
            si+=x;
        }
    if(sp)
        printf("%d\n",sp);
    else
        printf("Nu exista nr pare\n");
    if(si)
        printf("%d\n",si);
    else
        printf("Nu exista nr impare");
    return 0;
}
