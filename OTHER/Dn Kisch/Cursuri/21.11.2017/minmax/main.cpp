#include <cstdio>
using namespace std;
int main()
{
    int n,cn1,cn2;
    scanf("%d",&n);
    cn=n;
    int i1=9;
    if(cn==0)
    {
        printf("0 0");
        return 0;
    }
    while(cn1)
    {
        if(cn1>i1)
        {
            cn1-=i1;
            i1--;
        }
        else break;
    }
    i2=0;
    cn2=n;
    while(cn2)
    {
        if(cn2>i2)
        {
            cn2-=i2;
            i2++;
        }
        else break;
    }
    if(cn1>9 || cn2>9)
        printf("0 0");
    else
    {
        for(int j=9;j>i;--j)
            printf("%d",j);
        for()
    }
    return 0;
}
