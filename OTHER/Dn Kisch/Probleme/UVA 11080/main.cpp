#include<cstdio>
#include<queue>
using namespace std;
int a[205][205],v[205],ns,n,m,nr=0;
queue<int>q;
bool ok=true;
void BFS(int ns)
{
    int x;
    v[ns]=1;
    q.push(ns);
    bool steag=0;
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
                    steag=1;
                }
                else
                {
                    if(v[i]==v[x])
                        {
                            ok=false;
                            return;
                        }
                }
        if(steag==0)
            {
                nr++;
                v[ns]=0;
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
    while(!q.empty())
        q.pop();
}
int main()
{
    //freopen("1.in","r",stdin);
    //freopen("1.out","w",stdout);
    int x,y,c,t;
    scanf("%d",&t);
    for(int ti=1;ti<=t;++ti)
    {
        scanf("%d",&n);
        set0();
        scanf("%d",&m);
        //if(ti==28 || ti==47 || ti ==49)
               // printf("%d %d\n",n,m);
        for(int i=1; i<=m; ++i)
        {
            scanf("%d%d",&x,&y);
           // if(ti==28 || ti==47 || ti ==49)
             //   printf("%d %d\n",x,y);
            a[x][y]=a[y][x]=1;
        }
        ok=true;
        nr=0;
        for(int i=0;i<n && m;++i)
            if(v[i]==0)
                BFS(i);
        if(ok==true)
            {
                if(m==0)
                {
                  printf("%d\n",n);
                    continue;
                }
                int nr1=0,nr2=0;
                for(int i=0;i<n;++i)
                    if(v[i]==1)
                        nr1++;
                    else
                        if(v[i]==2)
                            nr2++;
                if(nr1>nr2)
                    printf("%d\n",nr2+nr);
                else
                   printf("%d\n",nr1+nr);
            }
       else
            printf("-1\n");
    }
    return 0;
}
