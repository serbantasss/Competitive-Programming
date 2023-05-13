//
//  main.cpp
//  delfin
//
//  Created by Serban Bantas on 20/02/2020.
//  Copyright © 2020 Serban Bantas. All rights reserved.
//

#include <cstdio>
#include <algorithm>
#include <queue>
using namespace std;
const int nmax=20;
int n,m;
int px,py;
int dx,dy;
int fx,fy;
int dix[]={0,1,0,-1};
int diy[]={1,0,-1,0};
short int mat[nmax][nmax];
int p[nmax][nmax],d[nmax][nmax],f[nmax][nmax];
int main()
{
    //freopen("1.in", "r", stdin);
    //freopen("1.out", "w", stdout);
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;++i)
    {
        scanf("\n");
        for(int j=1;j<=m;++j)
        {
            char ch;
            scanf("%c",&ch);
            if(ch=='1')
                mat[i][j]=1;
            if(ch=='0')
                mat[i][j]=0;
            if(ch=='S')
                px=i,py=j,mat[i][j]=1;
            if(ch=='D')
                dx=i,dy=j,mat[i][j]=0;
            if(ch=='F')
                fx=i,fy=j,mat[i][j]=1;
        }
    }
    for(int i=0;i<=n+1;++i)
        mat[i][0]=mat[i][m+1]=2;
    for(int j=0;j<=m+1;++j)
        mat[0][j]=mat[n+1][j]=2;
    queue<pair<pair<int,int>,int> > q;
    q.push({{px,py},0});
    p[px][py]=1;
    while(!q.empty())
    {
        auto t=q.front();
        q.pop();
        for(int i=0;i<4;++i)
        {
            int x=t.first.first+dix[i];
            int y=t.first.second+diy[i];
            if(mat[x][y]==1 && !p[x][y])
            {
                p[x][y]=p[t.first.first][t.first.second]+1;
                q.push({{x,y},0});
            }
        }
    }
    q.push({{dx,dy},0});
    d[dx][dy]=1;
    while(!q.empty())
    {
        auto t=q.front();
        q.pop();
        for(int i=0;i<4;++i)
        {
            int x=t.first.first+dix[i];
            int y=t.first.second+diy[i];
            if(mat[x][y]==1 && !d[x][y])
            {
                d[x][y]=d[t.first.first][t.first.second]+1;
                q.push({{x,y},0});
            }
        }
    }
    q.push({{fx,fy},1});
    f[fx][fy]=1;
    while(!q.empty())
    {
        auto t=q.front();
        q.pop();
        for(int i=0;i<4;++i)
        {
            int x=t.first.first+dix[i];
            int y=t.first.second+diy[i];
            if(!f[x][y] && mat[x][y]!=2)
            {
                if(mat[x][y]==1 && t.second==1)
                {
                    f[x][y]=f[t.first.first][t.first.second]+1;
                    q.push({{x,y},1});
                }
                else
                    if(mat[x][y]==0)
                    {
                        f[x][y]=f[t.first.first][t.first.second]+1;
                        q.push({{x,y},0});
                    }
            }
        }
    }
    int ans,ans2;
    if(p[fx][fy])
        ans=p[fx][fy];
    else
        ans=1000007;
    for(int i=1;i<=n;++i)
        for(int j=1;j<=m;++j)
            if(d[i][j] && f[i][j])
            {
                for(int k=0;k<4;++k)
                    {
                        int x=i+dix[k];
                        int y=j+diy[k];
                        if(mat[x][y]!=2 && p[x][y])
                        {
                            if(d[i][j]<p[x][y])
                                ans=min(ans,p[x][y]+1+)
                        }
                    }
            }
    return 0;
}
