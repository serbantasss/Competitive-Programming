#include <cstdio>

using namespace std;
int v[1005];
int main()
{
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
    int n,i=0,a=0,b=0,c=0;
    while(scanf("%d",&n)!=EOF)
    {
    i++;
    v[i]=n;
    }
    int x,j;
    for(j=1;j<=i;++j)
    {
        x=j%3;
        if(x==0)
            x=3;
        if(x==v[j])
            a++;
    }
    for(j=1;j<=i;++j)
    {
        if(j%2==1)
            x=2;
        if(j%4==0)
            x=3;
        if(j%4==2)
            x=1;
        if(x==v[j])
            b++;
    }
    for(j=1;j<=i;++j)
    {
        if(j%6==1 || j%6==2)
            x=3;
        if(j%6==3 || j%6==4)
            x=1;
        if(j%6==5 || j%6==0)
            x=2;
        if(x==v[j])
            c++;
    }
    if(a==b && c!=a)
        printf("%d\nAdrian\nBogdan\n%d\nCostel",a,c);
    return 0;
}
