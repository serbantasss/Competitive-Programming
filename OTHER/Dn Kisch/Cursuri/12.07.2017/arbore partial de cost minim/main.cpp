#include <cstdio>
#include <algorithm>
using namespace std;
struct intt
{
    int x,y,c;
};
intt v[400001],afis[200001];
int t[100001],h[200001];
int findset(int a)
{
    while(t[a]!=a)
        a=t[a];
    return a;
}
void unionset(int a,int b)
{
    if(h[a]==h[b])
    {
        t[b]=a;
        h[a]++;
    }
    else
        if(h[a]>h[b])
            t[b]=a;
        else
            t[a]=b;
}
bool cmp(intt a,intt b)
{
    return a.c<b.c;
}
int main()
{
   // freopen("apm.in","r",stdin);
   // freopen("apm.out","w",stdout);
    int n,m,i,j,x,y,c;
    scanf("%d %d",&n,&m);
    for(i=0;i<=200000;++i)
        h[i]=1,t[i]=i;
    for(int i=1;i<=m;++i)
    {
        scanf("%d%d%d",&x,&y,&c);
        v[i].x=x;
        v[i].y=y;
        v[i].c=c;
    }
    sort(v+1,v+m+1,cmp);
    int nr=0,cost=0;
    for(i=1;i<=m;++i)
    {
        int rx,ry;
        rx=findset(v[i].x);
        ry=findset(v[i].y);
        if(ry!=rx)
        {
            unionset(rx,ry);
            cost+=v[i].c;
            afis[++nr]=v[i];
        }
    }
    printf("%d\n%d\n",cost,nr);
    for(i=1;i<=nr;i++)
        printf("%d %d\n",afis[i].y,afis[i].x);
    return 0;
}
