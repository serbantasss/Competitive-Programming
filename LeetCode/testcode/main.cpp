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
int main(){
    vector<vector<int>> mama{{0, 1, 0},
                             {0, 1, 0},
                             {0, 1, 0},
                             {0, 1, 0},
                             {0, 1, 0}
    };
    mama = updateMatrix(mama);
    for(int i=0;i<mama.size();++i)
        for(int j=0;j<mama[i].size();++j)
            printf("%d ",mama[i][j]);
    return 0;
}
class Solution {
public:
    int shortestBridge(vector<vector<int>>& grid) {
        vector<vector<int>>v(grid.size(), vector<int>(grid[0].size(), 0));
        int chk=1;
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                if(!v[i][j] && grid[i][j]){
                    v[i][j]=1;
                    queue<pair<int, int>>q;
                    q.push({i, j});
                    while(!q.empty()){
                        int x=q.front().first, y=q.front().second;
                        q.pop();
                        if(x>0 && !v[x-1][y] && grid[x-1][y]){
                            v[x-1][y]=1;
                            q.push({x-1, y});
                        }
                        if(y>0 && !v[x][y-1] && grid[x][y-1]){
                            v[x][y-1]=1;
                            q.push({x, y-1});
                        }
                        if(x<grid.size()-1 && !v[x+1][y] && grid[x+1][y]){
                            v[x+1][y]=1;
                            q.push({x+1, y});
                        }
                        if(y<grid[0].size()-1 && !v[x][y+1] && grid[x][y+1]){
                            v[x][y+1]=1;
                            q.push({x, y+1});
                        }
                    }
                    chk=-1; break;
                }
            }
            if(chk==-1){break;}
        }
        // for(int i=0; i<grid.size(); i++){
        //     for(int j=0; j<grid[0].size(); j++){
        //         cout<<v[i][j]<<" ";
        //     }cout<<endl;
        // }cout<<endl;
        queue<pair<pair<int, int>, int>>q;
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                if(v[i][j]){
                    q.push({{i, j}, 0});
                    // if(i>0 && !v[i-1][j]){
                    //     q.push({{i, j}, 0});
                    // }
                    // else if(j>0 && !v[i][j-1]){
                    //     q.push({{i, j}, 0});
                    // }
                    // else if(i<grid.size()-1 && !v[i+1][j]){
                    //     q.push({{i, j}, 0});
                    // }
                    // else if(j<grid[0].size()-1 && !v[i][j+1]){
                    //     q.push({{i, j}, 0});
                    // }
                    // else if(i>0 && j>0 && !v[i-1][j-1]){
                    //     q.push({{i, j}, 0});
                    // }
                    // else if(i>0 && j<grid[0].size()-1 && !v[i-1][j+1]){
                    //     q.push({{i, j}, 0});
                    // }
                    // else if(i<grid.size()-1 && j<grid[0].size()-1 && !v[i+1][j+1]){
                    //     q.push({{i, j}, 0});
                    // }
                    // else if(i<grid.size()-1 && j>0 && !v[i+1][j-1]){
                    //     q.push({{i, j}, 0});
                    // }
                }
            }
        }
        //cout<<q.size()<<" "<<"chkkkk"<<endl;
        int ans=INT_MAX;
        while(!q.empty()){
            int x=q.front().first.first, y=q.front().first.second, cnt=q.front().second;
            q.pop();
            //cout<<x<<" "<<y<<" "<<cnt<<endl;
            if(x>0 && !v[x-1][y] && !grid[x-1][y]){
                v[x-1][y]=1;
                q.push({{x-1, y}, cnt+1});
            }
            else if(x>0 && !v[x-1][y] && grid[x-1][y]){
                ans=min(ans, cnt);
                //cout<<ans<<" "<<x-1<<" "<<y<<endl;
            }
            if(y>0 && !v[x][y-1] && !grid[x][y-1]){
                v[x][y-1]=1;
                q.push({{x, y-1}, cnt+1});
            }
            else if(y>0 && !v[x][y-1] && grid[x][y-1]){
                ans=min(ans, cnt);
                //cout<<ans<<" "<<x<<" "<<y-1<<endl;
            }
            if(x<grid.size()-1 && !v[x+1][y] && !grid[x+1][y]){
                v[x+1][y]=1;
                q.push({{x+1, y}, cnt+1});
            }
            else if(x<grid.size()-1 && !v[x+1][y] && grid[x+1][y]){
                ans=min(ans, cnt);
                //cout<<ans<<" "<<x+1<<" "<<y<<endl;
            }
            if(y<grid[0].size()-1 && !v[x][y+1] && !grid[x][y+1]){
                v[x][y+1]=1;
                q.push({{x, y+1}, cnt+1});
            }
            else if(y<grid[0].size()-1 && !v[x][y+1] && grid[x][y+1]){
                ans=min(ans, cnt);
                //cout<<ans<<" "<<x<<" "<<y+1<<endl;
            }
            // if(x>0 && y>0 && !v[x-1][y-1] && !grid[x-1][y-1]){
            //     v[x-1][y-1]=1;
            //     q.push({{x-1, y-1}, cnt+1});
            // }
            // else if(x>0 && y>0 && !v[x-1][y-1] && grid[x-1][y-1]){
            //     ans=min(ans, cnt+1);
            //     cout<<ans<<" "<<x-1<<" "<<y-1<<endl;
            // }
            // if(x>0 && y<grid[0].size()-1 && !v[x-1][y+1] && !grid[x-1][y+1]){
            //     v[x-1][y+1]=1;
            //     q.push({{x-1, y+1}, cnt+1});
            // }
            // else if(x>0 && y<grid[0].size()-1 && !v[x-1][y+1] && grid[x-1][y+1]){
            //     ans=min(ans, cnt+1);
            //     cout<<ans<<" "<<x-1<<" "<<y-1<<endl;
            // }
            // if(x<grid.size()-1 && y<grid[0].size()-1 && !v[x+1][y+1] && !grid[x+1][y+1]){
            //     v[x+1][y+1]=1;
            //     q.push({{x+1, y+1}, cnt+1});
            // }
            // else if(x<grid.size()-1 && y<grid[0].size()-1 && !v[x+1][y+1] && grid[x+1][y+1]){
            //     ans=min(ans, cnt+1);
            //     cout<<ans<<" "<<x+1<<" "<<y+1<<endl;
            // }
            // if(x<grid.size()-1 && y>0 && !v[x+1][y-1] && !grid[x+1][y-1]){
            //     v[x+1][y-1]=1;
            //     q.push({{x+1, y-1}, cnt+1});
            // }
            // else if(x<grid.size()-1 && y>0 && !v[x+1][y-1] && grid[x+1][y-1]){
            //     ans=min(ans, cnt+1);
            //     cout<<ans<<" "<<x+1<<" "<<y-1<<endl;
            // }
        }
        // for(int i=0; i<grid.size(); i++){
        //     for(int j=0; j<grid[0].size(); j++){
        //         cout<<v[i][j]<<" ";
        //     }cout<<endl;
        // }
        // cout<<endl;
        return ans;
    }
};