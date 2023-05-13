#include <cstdio>
#include <algorithm>

using namespace std;
int a[500001],n,m,mar,x,y,i,j,ok,k,nr,v,vec[500001],s,h;
long l;
int main()
{
    freopen("praslea.in","r",stdin);
    freopen("praslea.out","w",stdout);
    scanf("%d%d%d",&n,&m,&l);
    for(i=1; i<=n; i++)
        a[i]=l;
    for(i=1; i<=m; i++)
    {
        scanf("%d%d",&x,&y);
        a[x]=y;
    }
    scanf("%d",&mar);
    k=1;
    s=0;
    for(i=1; i<=n; i++)
    {
        s=s+a[i];
        if(s==mar)
           v=i;
        if(s>mar && h==0)
        {
            v=i;
            h=1;
        }
        j=i;
        ok=0;
        nr=0;
        while(ok==0)
        {
            if(a[j]!=a[j+1])
               ok=1;
            j++;
            nr++;
        }
        vec[k]=nr--;
        k++;
    }
    sort(vec,vec+i);
    printf("%d\n",vec[k-1]);
    printf("%d",v);
    return 0;
}
