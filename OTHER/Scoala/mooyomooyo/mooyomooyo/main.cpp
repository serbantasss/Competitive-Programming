//
//  main.cpp
//  mooyomooyo
//
//  Created by Serban Bantas on 29/12/2019.
//  Copyright © 2019 Serban Bantas. All rights reserved.
//

#include <cstdio>
#include <vector>
using namespace std;
int mat[200][20],n,m,r,k,size;
int viz[200][20];
struct regiune
{
    int size;
    int xo,yo;
}v[10005];
void dfs(int i,int j,int r)
{
    viz[i][j]=1;
    v[r].size++;
    if(mat[i][j+1]==mat[i][j] && viz[i][j+1]==0)
        dfs(i,j+1,r);
    if(mat[i][j-1]==mat[i][j] && viz[i][j-1]==0)
        dfs(i,j-1,r);
    if(mat[i+1][j]==mat[i][j] && viz[i+1][j]==0)
        dfs(i+1,j,r);
    if(mat[i-1][j]==mat[i][j] && viz[i-1][j]==0)
        dfs(i-1,j,r);
}
void delet(int i,int j,int val)
{
    mat[i][j]=0;
    if(mat[i][j+1]==val)
        delet(i,j+1,val);
    if(mat[i][j-1]==val)
        delet(i,j-1,val);
    if(mat[i+1][j]==val)
        delet(i+1,j,val);
    if(mat[i-1][j]==val)
        delet(i-1,j,val);
}
void gravitate()
{
    for(int j=1;j<=10;++j)
    {
        vector<int> stiva;
        for(int i=n;i>=1;--i)
            if(mat[i][j])
                stiva.push_back(mat[i][j]);
        for(int i=1;i<=n;++i)
            mat[i][j]=0;
        for(int i=0,ind=n;i<stiva.size();++i,--ind)
            mat[ind][j]=stiva[i];
    }
}
int main(int argc, const char * argv[]) {
    freopen("mooyomooyo.in","r",stdin);
    freopen("mooyomooyo.out","w",stdout);
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;++i)
        for(int j=1;j<=10;++j)
            scanf("%1d",&mat[i][j]);
    while(1)
    {
        r=0;
        bool ok=1;
        for(int i=1;i<=n;++i)
            for(int j=1;j<=10;++j)
                if(!viz[i][j] && mat[i][j]!=0)
                {
                    v[++r].size=0;
                    v[r].xo=i;
                    v[r].yo=j;
                    dfs(i,j,r);
                    if(v[r].size>=k)
                        ok=0;
                }
        if(ok)
        {
            gravitate();
            break;
        }
        else
        {
            for(int i=1;i<=r;++i)
                if(v[i].size>=k)
                    delet(v[i].xo,v[i].yo,mat[v[i].xo][v[i].yo]);
            gravitate();
        }
        for(int i=1;i<=n;++i)
            for(int j=1;j<=10;++j)
                viz[i][j]=0;
    }
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=10;++j)
            printf("%d",mat[i][j]);
        printf("\n");
    }
    return 0;
}
