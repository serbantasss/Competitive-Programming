//
// Created by Serban Bantas on 14.05.2023.
//
#include <cstdio>
#include <vector>
#include <stack>
#include <cstring>

#define NMAX 100000

using namespace std;
int N, M, nrconex, k;
stack<int> stv;
vector<int> adj[2*NMAX+5];
int nr[2*NMAX+5],parent[2*NMAX+5],comp_conex[2*NMAX+5];
bool viz[2*NMAX + 5];

int ind(int a){
    if(a<0)
        return -a + N;
    return a;
}

int neg(int a){
    if(a>N)
        return a-N;
    return a+N;
}

void dfs(int nod)
{
    nr[nod]=parent[nod]=k++;
    stv.push(nod);
    viz[nod] = true;
    for(int next : adj[nod])
        if(nr[next] == 0){
            dfs(next);
            if(parent[nod] > parent[next])
                parent[nod] = parent[next];
        }
        else
            if(viz[next] && parent[nod] > parent[next])
                parent[nod] = parent[next];
    if(nr[nod]==parent[nod])
    {
        int x;
        nrconex++;
        do
        {
            x=stv.top();
            comp_conex[x]= nrconex;
            viz[x] = false;
            stv.pop();
        }while(x!=nod);
    }
}
int main()
{
    freopen("2sat.in","r",stdin);
    freopen("2sat.out","w",stdout);
    scanf("%d%d",&N,&M);
    for(int i=1;i<=M;++i){
        int x,y;
        scanf("%d%d",&x,&y);
        x = ind(x), y = ind(y);
        adj[neg(x)].push_back(y);
        adj[neg(y)].push_back(x);
    }
    //topological order
    k = 1;
    for(int i=1;i<=2*N;++i)
        if(nr[i] == 0)
            dfs(i);
    for(int i=1;i<=2*N;++i)
        comp_conex[i] = nrconex + 1 - comp_conex[i];
    memset(nr, 0, N+5);
    bool ok = 1;
    for(int i = 1; i <= N && ok; ++i) {
        if (comp_conex[i] == comp_conex[neg(i)])
            ok = 0;
        nr[i] = comp_conex[i] > comp_conex[neg(i)];
    }
    if(ok)
        for(int i=1;i<=N;++i)
            printf("%d ",nr[i]);
    else
        printf("-1");
    return 0;
}