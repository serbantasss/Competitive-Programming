#include <bits/stdc++.h>
using namespace std;
int v[105][105];
int insul[10];
void destroy(int x,int y,int val)
{
    v[x][y]=4;
    if(v[x][y-1]==val)
        destroy(x,y-1,val);
    if(v[x][y+1]==val)
        destroy(x,y+1,val);
    if(v[x+1][y]==val)
        destroy(x+1,y,val);
    if(v[x-1][y]==val)
        destroy(x-1,y,val);
}
int main()
{
    freopen("insule.in","r",stdin);
    freopen("insule.out","w",stdout);
    int n,m,i,j;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;++i)
        for(j=1;j<=m;++j)
            scanf("%1d",&v[i][j]);
    for(i=1;i<=n;++i)
        v[i][0]=v[i][m+1]=4;
    for(i=1;i<=m;++i)
        v[0][i]=v[n+1][i]=4;
    for(i=1;i<=n;++i)
        for(j=1;j<=m;++j)
            if(v[i][j] && v[i][j]!=4)
            {
                insul[v[i][j]]++;
                destroy(i,j,v[i][j]);
            }
    printf("%d %d %d",insul[1],insul[2],insul[3]);
    return 0;
}
