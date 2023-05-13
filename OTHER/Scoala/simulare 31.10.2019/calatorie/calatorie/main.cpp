#include <bits/stdc++.h>
using namespace std;
const int xcodesugepula=400005;
struct nodgraf
{
    long long x,y,cost;
};
long long a[xcodesugepula],tata[xcodesugepula];
nodgraf v[xcodesugepula];
bool mycmp(nodgraf a,nodgraf b)
{
   /* if(a.cost==b.cost)
    {
        if(a.x==b.x)
            return a.y<b.y;
        return a.x<b.x;
    }*/
    return a.cost<b.cost;
}
long long cautatata(long long nod)
{
    while(tata[nod]!=nod)
        nod=tata[nod];
    return nod;
}
int main()
{
    //freopen("1.in","r",stdin);
    //freopen("1.out","w",stdout);
    long long n,m,i,mi=LLONG_MAX,pozmi=0,ans=0;
    scanf("%lld%lld",&n,&m);
    for(i=1;i<=n;++i)
    {
        scanf("%lld",&a[i]);
        if(a[i]<mi)
        {
            mi=a[i];
            pozmi=i;
        }
    }
    for(i=1;i<=m;++i)
    {
        scanf("%lld%lld%lld",&v[i].x,&v[i].y,&v[i].cost);
        if(a[v[i].x]+a[v[i].y]<v[i].cost)
            v[i].cost=a[v[i].x]+a[v[i].y];
    }
    for(i=1;i<=n;++i)
        if(i!=pozmi)
        {
            v[++m].x=pozmi;
            v[m].y=i;
            v[m].cost=a[pozmi]+a[i];
        }
    sort(v+1,v+m+1,mycmp);
    for(i=0;i<=n;++i)
        tata[i]=i;
    for(i=1;i<=m;++i)
    {
        long long x,y;
        x=cautatata(v[i].x);
        y=cautatata(v[i].y);
        if(x!=y)
        {
            tata[x]=y;
            ans+=v[i].cost;
        }
    }
    printf("%lld",ans);
    return 0;
}
