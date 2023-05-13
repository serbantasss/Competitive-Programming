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
    freopen("tort.in","r",stdin);
    freopen("tort.out","w",stdout);
    int n,m,j;
    scanf("%d%d",&n,&m);
    j=cmmdc( n, m);
    int cmmmc=n*m/j;
    printf("%d %d",cmmmc/j,j);
    return 0;
}
