#include <stdio.h>
#include <stdlib.h>
long n,cmmdc,a,b;
int main()
{
    scanf("%d%d",&a,&b);
    int r;
    while(r)
    {
        r=a%b;
        a=b;
        b=r;
    }
    cmmdc=a;
    if(cmmdc==1)
        printf("DA");
    else
        printf("NU");
    return 0;
}
