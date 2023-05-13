#include <cstdio>
using namespace std;
int t[100001],h[100001];
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
int main()
{
    freopen("disjoint.in","r",stdin);
    freopen("disjoint.out","w",stdout);
    int n,m,i,j,x,y,op;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;++i)
        t[i]=i;
    for(i=1;i<=n;++i)
        h[i]=1;
    for(i=1;i<=m;++i)
    {
        scanf("%d%d%d",&op,&x,&y);
        int rx,ry;
        rx=findset(x);
        ry=findset(y);
        if(op==1)
        {
            unionset(rx,ry);
        }
        else
        {
            if(rx==ry)
                printf("DA\n");
            else
                printf("NU\n");
        }
    }
    return 0;
}
