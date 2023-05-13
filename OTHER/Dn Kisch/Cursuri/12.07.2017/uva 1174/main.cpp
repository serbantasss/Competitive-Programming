#include <cstdio>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
struct intt
{
    int x,y,c;
};
intt v[400001],afis[200001];
string nume[2001];
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
int saynumber(string s,int numenr)
{
    int j=1;
    for(j=1;j<=numenr;++j)
        if(s==nume[j])
            return j;
    return j;
}
int main()
{
   // freopen("apm.in","r",stdin);
   // freopen("apm.out","w",stdout);
    int n,m,i,j,c,numenr=0,nx,ny;
    string x,y;
    scanf("%d %d\n",&n,&m);
    for(i=1;i<=m;++i)
    {
        scanf("%s %s %d\n",x,y,&c);
        nx=saynumber(x,numenr);
        ny=saynumber(y,numenr);
        v[i].x=x;
        v[i].y=y;
        v[i].c=c;
    }
    /*sort(v+1,v+m+1,cmp);
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
        }
    }
    printf("%d\n",cost);*/
    return 0;
}
