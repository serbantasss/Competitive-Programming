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
vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
    vector<vector<int>> ret = mat;
    queue<pair<int,int>> q;
    for(int i=0;i<mat.size();++i)
        for(int j=0;j<mat[i].size();++j)
            if(!mat[i][j])
                q.push(make_pair(i,j));
    while(!q.empty()){
        int x=q.front().first, y=q.front().second;
        q.pop();
        mat[x][y]=-1;
        int dx[]={0,0,-1,1};
        int dy[]={-1,1,0,0};
        for(int i=0;i<4;++i)
            if(x+dx[i]>=0 && y+dy[i]>=0 && x+dx[i]<mat.size() && y+dy[i]<mat[x].size() && mat[x+dx[i]][y+dy[i]] == 1)
                mat[x+dx[i]][y+dy[i]]=-1,ret[x+dx[i]][y+dy[i]]=ret[x][y]+1,q.push(make_pair(x+dx[i],y+dy[i]));
    }
    return ret;
}
