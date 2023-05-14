//
// Created by Serban Bantas on 20.01.2023.
//
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;
bool bfs(int x,int y,vector<vector<int>>& grid1, vector<vector<int>>& grid2){
    bool ret = 1;
    if(grid1[x][y] == 0)
        ret=0;
    if(grid2[x][y] == 1){
        grid2[x][y] = 2;
        int dx[] = {0,1,0,-1};
        int dy[] = {1,0,-1,0};
        for(int i=0;i<4;++i)
            if(x+dx[i]>=0 && y+dy[i]>=0 && x+dx[i]<grid2.size() && y+dy[i]<grid2[x].size() && grid2[x+dx[i]][y+dy[i]] != 0)
                if(bfs(x+dx[i],y+dy[i],grid1,grid2) == 0)
                    ret = 0;
    }
    return ret;
}
int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
    int cnt = 0;
    for(int i=0;i<grid2.size();++i)
        for(int j=0;j<grid2[i].size();++j)
            if(grid2[i][j]==1 && grid1[i][j]==1 && bfs(i,j,grid1,grid2))
                printf("%d %d\n",i,j),cnt++;
    return cnt;
}
int main(){
    vector<vector<int>> pl1
            {{1,1,1,0,0},{0,1,1,1,1},{0,0,0,0,0},{1,0,0,0,0},{1,1,0,1,1}};
    vector<vector<int>> pl2
            {{1,1,1,0,0},{0,0,1,1,1},{0,1,0,0,0},{1,0,1,1,0},{0,1,0,1,0}};
    printf("%d",countSubIslands(pl1,pl2));
    return 0;
}