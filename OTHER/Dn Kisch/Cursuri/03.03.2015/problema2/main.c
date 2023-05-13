#include <stdio.h>
long n,exp=0,c,sw=1;
void main()
{
    scanf("%d",&n);
    if(n==0)
        sw=0;
    if(n>1)
    {
        do
        {
            c=n%10;
            if(c!=0)
            {
                sw=0;
                break;
            }
            else
                exp++;
            n/=10;
            if(n==1)
            {
                sw=1;
                break;
            }
        }
        while(n>1);
    }
    if(sw)
    {
        printf("DA\n%d\n",exp);
    }
    else
        printf("NU\n");
}

