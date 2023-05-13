#include<iostream>
#include<fstream>
#include<queue>
using namespace std;
ifstream in("bipartit2.in");
ofstream out("bipartit2.out");
int a[105][105],v[105],ns,n,m;
queue<int>q;
void BFS(int ns)
{
    v[ns]=1;
    q.push(ns);
    while(!q.empty())
    {
        x=q.front();
        for(int i=1; i<=n; i++)
            if(a[x][i]==1)
                if(v[i]==0)
                {
                    q.push(i);
                    if (v[x]==1)
                        v[i]=2;
                    else
                        v[i]=1;
                }
        q.pop();
    }
}
int bipartit()
{
    for(int x=1; x<n; x++)
        for(int y=x+1; y<=n; y++)
            if(v[x]==v[y])
                if(a[x][y]==1)
                    return 0;
    return 1;
}
int main()
{
    int x,y,c;
    in>>n>>m;
    for(int i=1; i<=m; ++i)
    {
        in>>x>>y;
        a[x][y]=a[y][x]=1;
    }
    if(bipartit())
        cout<<"DA.\n";
    else
        cout<<"NU.\n";
    return 0;
}
