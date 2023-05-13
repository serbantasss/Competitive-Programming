#include <cstdio>

using namespace std;

int main()
{
    int n,s=0,c,x,control,sc=0;
    scanf("%d",&n);
    x=n;
    s=0;
    do
    {
        c=x%10;
        sc+=c;
        x/=10;
    }
    while(x>0);
    if(sc<=9)
        printf("%d",sc);
    else
    {

        do
        {
            x=sc;
            s=0;
            do
            {
                c=x%10;
                s+=c;
                x/=10;
            }
            while(x>0);
            sc=s;
        }
        while(sc>9);
        printf("%d",sc);
    }
    return 0;
}
