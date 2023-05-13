//
//  main.cpp
//  feelgood
//
//  Created by Serban Bantas on 05/03/2020.
//  Copyright © 2020 Serban Bantas. All rights reserved.
//

#include <cstdio>
#include <queue>
using namespace std;
const int nmax=10;
bool camera[nmax][nmax][5];
int viz[nmax][nmax][8];
int mat[nmax][nmax],n,m,d;
int dx[]={1,0,0,-1};
int dy[]={0,1,-1,0};
struct estinesimtit
{
    int x,y,nr;
};
inline bool isin(int x,int y)
{
    return x>=1 && y>=1 && x<=n && y<=m;
}
inline void set1(int x,int y,int ind)
{
    int dist=ind*d-1;
    for(int i=x-dist;i<=x;++i)
        for(int j=y-(dist-x+i);j<=(y+dist-x+i);++j)
            if(isin(i,j))
                camera[i][j][ind]=1;
    for(int i=x+dist;i>=x;--i)
        for(int j=y-(dist+x-i);j<=(y+dist+x-i);++j)
            if(isin(i,j))
                camera[i][j][ind]=1;
}
int main(int argc, const char * argv[]) {
    freopen("feelgood.in","r",stdin);
    freopen("feelgood.out","w",stdout);
    scanf("%d%d%d",&n,&m,&d);
    int sx,sy,fx,fy;
    for(int i=1;i<=n;++i)
        for(int j=1;j<=m;++j)
        {
            scanf("%d",&mat[i][j]);
            if(mat[i][j]==1)
            {
                set1(i,j,1);
                set1(i,j,2);
                set1(i,j,3);
                set1(i,j,4);
            }
            if(mat[i][j]==2)
                sx=i,sy=j;
            if(mat[i][j]==6)
                fx=i,fy=j;
        }
    queue<estinesimtit> q;
    q.push({sx,sy,0});
    viz[sx][sy][0]=1;
    while(!q.empty())
    {
        estinesimtit t=q.front();
        q.pop();
        for(int i=0;i<4;++i)
        {
            int x=t.x+dx[i];
            int y=t.y+dy[i];
            int cnt=1;
            if((1&t.nr))
                cnt++;
            if((2&t.nr))
                cnt++;
            if((4&t.nr))
                cnt++;
            if(isin(x,y) && viz[x][y][t.nr]==0 && camera[x][y][cnt]==0)
            {
                q.push({x,y,t.nr}),viz[x][y][t.nr]=viz[t.x][t.y][t.nr]+1;
                if(mat[x][y]==3 && camera[x][y][cnt+1]==0)
                    q.push({x,y,t.nr+1}),viz[x][y][t.nr+1]=viz[t.x][t.y][t.nr]+1;
                if(mat[x][y]==4 && camera[x][y][cnt+1]==0)
                    q.push({x,y,t.nr+2}),viz[x][y][t.nr+2]=viz[t.x][t.y][t.nr]+1;
                if(mat[x][y]==5 && camera[x][y][cnt+1]==0 )
                    q.push({x,y,t.nr+4}),viz[x][y][t.nr+4]=viz[t.x][t.y][t.nr]+1;
            }
        }
    }
    if(viz[fx][fy][7]>0)
    {
        printf("%d %d\n",4,viz[fx][fy][7]-1);
        return 0;
    }
    if(viz[fx][fy][6]>0)
    {
        printf("%d %d\n",3,viz[fx][fy][6]-1);
        return 0;
    }
    if(viz[fx][fy][5]>0)
    {
        printf("%d %d\n",3,viz[fx][fy][5]-1);
        return 0;
    }
    if(viz[fx][fy][3]>0)
    {
        printf("%d %d\n",3,viz[fx][fy][3]-1);
        return 0;
    }
    if(viz[fx][fy][4]>0)
    {
        printf("%d %d\n",2,viz[fx][fy][4]-1);
        return 0;
    }
    if(viz[fx][fy][2]>0)
    {
        printf("%d %d\n",2,viz[fx][fy][2]-1);
        return 0;
    }
    if(viz[fx][fy][1]>0)
    {
        printf("%d %d\n",2,viz[fx][fy][1]-1);
        return 0;
    }
    if(viz[fx][fy][0]>0)
    {
        printf("%d %d\n",1,viz[fx][fy][0]-1);
        return 0;
    }
   printf("0 0\n");
//    for(int i=1;i<=n;++i)
//    {
//        for(int j=1;j<=m;++j)
//            printf("%d ",viz[i][j][3]);
//        printf("\n");
//    }
    return 0;
}
