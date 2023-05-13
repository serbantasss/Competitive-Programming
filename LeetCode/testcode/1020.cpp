//
// Created by Serban Bantas on 20.01.2023.
//
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;
bool closedbfs(int x,int y, vector<vector<int>>& grid){
    if(grid[x][y] == 1 && (x==0 || y==0 || x==grid.size()-1 || y==grid[x].size()-1))
        return 0;
    bool ret = 1;
    if(grid[x][y] == 1){
        grid[x][y] = 2;
        int dx[] = {0,1,0,-1};
        int dy[] = {1,0,-1,0};
        for(int i=0;i<4;++i)
            if(!(grid[x+dx[i]][y+dy[i]] == 0))
                if(closedbfs(x+dx[i],y+dy[i],grid) == 0)
                    ret = 0;
    }
    return ret;
}
int findsize(int x,int y,vector<vector<int>>& grid){
    int size = 1;
    if(grid[x][y]==2){
        grid[x][y] = 3;
        int dx[] = {0,1,0,-1};
        int dy[] = {1,0,-1,0};
        for(int i=0;i<4;++i)
            if(!(grid[x+dx[i]][y+dy[i]] == 0))
                size+=closedbfs(x+dx[i],y+dy[i],grid);
    }
    return size;
}
int numEnclaves(vector<vector<int>>& grid) {
    int nr = 0;
    vector<pair<int,int>> adr;
    for(int i = 0;i<grid.size();++i)
        for(int j = 0;j<grid[i].size();++j)
            if(grid[i][j] == 1 && closedbfs(i,j,grid))
                adr.push_back(make_pair(i,j));
    for(int i=0;i<adr.size();++i)
        nr+=findsize(adr[i].first,adr[i].second,grid);
    return nr;
}
int main(){
    vector<vector<int>> mama{
            {0, 0, 0,0},
            {1, 0, 0,0},
            {0, 1,1,0},
            {0, 0, 0,0}
    }
    printf("%d",numEnclaves(mama));
    return 0;
}