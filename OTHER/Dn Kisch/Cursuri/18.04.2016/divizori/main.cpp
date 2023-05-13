#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
int v[2005];
int descom(int n)
{
    int e,d,ma=0;
    d=2;
    while(d*d<=n && n>1)
    {
        e=0;
        while(n%d==0)
        {
            e++;
            n/=d;
        }
        if(d>ma && e>=1)
            ma=d;
        d++;
    }
    if(n>1)
        if(n>ma)
            ma=n;
    return ma;
}
int mpow(int x,int y)
{
    int nr=1;
    for(int i=1;i<=y;++i)
        nr*=x;
    return nr;
}
bool cmp(int a,int b)
{
   int ab,ba,nca,ncb;
   nca=(int)log10(a)+1;
   ncb=(int)log10(b)+1;
   ab=a*mpow(10,ncb)+a;
   ba=b*mpow(10,nca)+b;
   return ab>ba;
}
int main()
{
    freopen("divizori.in","r",stdin);
    freopen("divizori.out","w",stdout);
    int n,i,x;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        scanf("%d",&x);
        v[i]=descom(x);
    }
    sort(v+1,v+n+1,cmp);
    for(i=1;i<=n;++i)
        printf("%d",v[i]);
    return 0;
}
