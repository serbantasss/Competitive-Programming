#include <cstdio>

using namespace std;
int cmmdc(int a,int b)
{
    int r;
    while(b)
    {
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}
int main()
{
    freopen("test1.in","r",stdin);
    freopen("test1.out","w",stdout);
    int n,a,b,cm;
    scanf("%d%d",&n,&a);
    for(int i=1;i<=n;++i)
    {
    scanf("%d",&b);
    cm=cmmdc(a, b);
    a=cm;
    }
    printf("%d",cm);
    return 0;
}
