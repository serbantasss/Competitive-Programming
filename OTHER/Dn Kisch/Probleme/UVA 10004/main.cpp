#include<cstdio>
#include<queue>
using namespace std;
int a[205][205],v[205],ns,n,m;
queue<int>q;
bool ok=true;
void BFS(int ns)
{
    int x;
    v[ns]=1;
    q.push(ns);
    while(!q.empty())
    {
        x=q.front();
        for(int i=0; i<n; i++)
            if(a[x][i]==1)
                if(v[i]==0)
                {
                    q.push(i);
                    if (v[x]==1)
                        v[i]=2;
                    else
                        v[i]=1;
                }
                else
                {
                    if(v[i]==v[x])
                        {
                            ok=false;
                            return;
                        }
                }
        q.pop();
    }
}
void set0()
{
    for(int i=0;i<n;++i)
        v[i]=0;
    for(int i=0;i<n;++i)
        for(int j=0;j<n;++j)
           a[i][j]=0;
}
int main()
{
    int x,y,c,t;
    scanf("%d",&t);
    for(int ti=1;ti<=t;++t);
    {
        scanf("%d",&n);
        set0();
        scanf("%d",&m);
        for(int i=1; i<=m; ++i)
        {
            scanf("%d%d",&x,&y);
            a[x][y]=a[y][x]=1;
        }
        ok=true;
        BFS(0);
        if(ok==true)
            printf("BICOLORABLE.\n");
        else
            printf("NOT BICOLORABLE.\n");
    }
    return 0;
}
