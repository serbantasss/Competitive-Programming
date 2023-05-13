#include <cstdio>
#include <algorithm>
using namespace std;
int v[101];
int main()
{
    freopen("alee.in","r",stdin);
    freopen("alee.out","w",stdout);
    int n,m;
    scanf("%d%d",&n,&m);
    for(register int i=1;i<=n;++i)
        scanf("%d",&v[i]);
    sort(v+1,v+n+1);
    bool ok=true;int s,nr;
    s=nr=0;
    for(register int i=1;i<=n && ok;++i)
    {
     if(s+v[i]>m/2)
       ok=false;
    else
       s+=v[i],++nr;
    }
    printf("%d %d",nr,s);
    return 0;
}
