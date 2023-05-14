//
// Created by Serban Bantas on 20.01.2023.
//
#include <cstdio>
#include <vector>
#include <map>
#include <algorithm>
#include <string>

using namespace std;

class Solution {
public:
    void bfs(int x,int y,int nrins,vector<vector<char>>& grid){
        if(grid[x][y] == '1'){
            grid[x][y] = '2';
            int dx[] = {0,1,0,-1};
            int dy[] = {1,0,-1,0};
            for(int i=0;i<4;++i)
                if(!(x+dx[i]<0 || y+dy[i]<0 || x+dx[i]>=grid.size() || y+dy[i]>=grid[x].size() || grid[x+dx[i]][y+dy[i]] == '0'))
                    bfs(x+dx[i],y+dy[i],nrins,grid);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int cnt = 0;
        for(int i=0;i<grid.size();++i)
            for(int j=0;j<grid[i].size();++j)
                if(grid[i][j] == '1'){
                    cnt++;
                    bfs(i,j,cnt,grid);
                }
        return cnt;
    }
};
