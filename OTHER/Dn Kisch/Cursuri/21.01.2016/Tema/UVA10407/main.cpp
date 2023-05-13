#include <cstdio>

using namespace std;
int cmmdc(int a, int b)
{
    int r;
    while (b)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int x[10005],d[10005];
int main()
{
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
    int a,b,i,num,j,m;
    for(;;)
    {
        int n=0;
        scanf("%d",&x[n]);
        if(x[n]==0)
            break;
        n++;
        m=0;
        for(;;)
        {
            scanf("%d",&x[n]);
            if(x[n]==0)
                break;
            d[m]=x[n]-x[n-1];
            if (d[n-1]<0)
                d[n-1]=-d[n-1];
            if (d[m])
                m++;
            n++;
        }
        num=d[0];
        for(j=1; j<m; j++)
            num=cmmdc(num,d[j]);
        printf("%d\n",num);
        i=0;
    }
    return 0;
}
