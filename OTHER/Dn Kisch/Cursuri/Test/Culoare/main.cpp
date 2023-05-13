#include <cstdio>

using namespace std;

int main()
{
    freopen("culoare.in","r",stdin);
    freopen("culoare.out","w",stdout);
    int n,poz,cn,i,num;
    scanf("%d",&n);
    poz=1;num=0;cn=n;i=1;
    while(n)
    {
        if(n&1)
        {
            num++;
            poz=i;
        }
        n=n>>1;
        i++;
    }
    n=cn;
    if(num==1)
        printf("C %d\n",poz);
        else
    {
        printf("N ");
        i=1;
        while(n)
        {
            if(n&1)
            {
                printf("%d ",i);
            }
            i++;
            n=n>>1;
        }
    }
    return 0;
}
