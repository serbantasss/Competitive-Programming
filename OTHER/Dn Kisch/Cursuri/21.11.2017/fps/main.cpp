#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int t1,t2;
void
long long curba(int n,int m)
{

    long long t1=1,t2=1;
    int i;
    for(i=1;i<=m;i++)
    {
        t2=t1*(n-i+1)/i;
        t1=t2;
    }
    return t2;
}
int main()
{
    freopen("pm.in","r",stdin);
    freopen("pm.out","w",stdout);
    int n,m;
    scanf("%d%d",&n,&m);
    long long t1=1,t2=1;
    int i;
    for(i=1;i<=m;i++)
    {
        t2=t1*(n-i+1)/i;
        t1=t2;
    }
    printf("%lld",t2);
    return 0;
}
