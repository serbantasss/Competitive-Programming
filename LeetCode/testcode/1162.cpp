//
// Created by Serban Bantas on 20.01.2023.
//
#include <vector>
#include <algorithm>
#include <cstdio>
#include <queue>
#include <deque>
#include <string>
using namespace std;

int maxDistance(vector<vector<int>>& grid) {
    queue<pair<int,int>> q;
    for(int i=0;i<grid.size();++i)
        for(int j=0;j<grid[i].size();++j)
            if(grid[i][j]==1)
                q.push(make_pair(i,j));
    vector<vector<int>> dp = grid;
    while(!q.empty()){
        int x=q.front().first,y=q.front().second;
        grid[x][y] = -1;
        q.pop();
        int dx[] = {0,1,0,-1};
        int dy[] = {1,0,-1,0};
        for(int i=0;i<4;++i)
            if(x+dx[i]>=0 && y+dy[i]>=0 && x+dx[i]<grid.size() && y+dy[i]<grid[x].size() && grid[x+dx[i]][y+dy[i]] == 0 && dp[x+dx[i]][y+dy[i]] == 0)
                dp[x+dx[i]][y+dy[i]] = dp[x][y] + 1,q.push(make_pair(x+dx[i],y+dy[i]));
    }
    int res = 0;
    for(int i=0;i<dp.size();++i)
        for(int j=0;j<dp[i].size();++j)
            res = max(res,dp[i][j]);
    if(res<2)
        return -1;
    return res-1;
}
int main(){
    vector<vector<int>> pl1{{1,0,0},{0,0,0},{0,0,0}};
    printf("%d",maxDistance(pl1));
    return 0;
}