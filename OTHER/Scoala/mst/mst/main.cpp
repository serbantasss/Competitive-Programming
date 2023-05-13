//
//  main.cpp
//  mst
//
//  Created by Serban Bantas on 29.09.2020.
//
 
#include <bits/stdc++.h>
using namespace std;
map<pair<int,int>,bool> ad;
vector<int>v[100005];
bool viz[100005];
int n,m,mi,cnt;
void dfs(int x,int n)
{
    for(int i=1;i<=n;++i)
        if(!ad[make_pair(x,i)] && x!=i && !viz[i])
        {
            viz[i]=1;
            cnt++;
            dfs(i,n);
        }
}
int main(int argc, const char * argv[])
{
    cin>>n>>m;
    mi=n;
    for(int i=1;i<=m;++i)
    {
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
        ad[make_pair(x,y)]=1;
        ad[make_pair(y,x)]=1;
    }
    for(int i=1;i<=n;++i)
        if(viz[i]==0)
        {
            viz[i]=1;
            dfs(i,n);
        }
    if(m==0)
        cout<<0;
    else
        cout<<n-cnt-1;
    return 0;
}
