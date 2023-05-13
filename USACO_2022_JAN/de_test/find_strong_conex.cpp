//
// Created by Serban Bantas on 02.03.2023.
//
#include <cstdio>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;
const int nmax = 105;
bool adc[nmax][nmax];
vector<vector<int>> conex_comp;
int nr[nmax], lowlink[nmax], nrnod, n, m, N;
bool instack[nmax];
stack<int> stiva;

void find_conex(int nod){
    nr[nod] = lowlink[nod] = nrnod;
    nrnod++;
    stiva.push(nod);
    instack[nod] = 1;
    for(int i=1; i<=n; ++i)
        if(adc[nod][i] && nod != i) {
            if (nr[i] == 0) {
                find_conex(i);
                lowlink[nod] = min(lowlink[i], lowlink[nod]);
            } else {
                if (instack[i])
                    lowlink[nod] = min(lowlink[nod], lowlink[i]);
            }
        }
    if(lowlink[nod] == nr[nod]){
        vector<int> prov;
        int curr;
        do{
            curr = stiva.top();
            prov.push_back(curr);
            instack[curr] = 0;
            stiva.pop();
        }while(curr != nod);
        conex_comp.push_back(prov);
    }
}
void dfs(int nod){

}
int main()
{
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
    int x, y;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=m;++i){
        scanf("%d %d",&x,&y);
        adc[x][y] = 1;
    }
    nrnod = 1;
    for(int i=1;i<=n;++i)
        if(nr[i] == 0)
            find_conex(i);
    for(int i=0;i<N;++i)
        sort(conex_comp[i].begin(), conex_comp[i].end());
    sort(conex_comp.begin(),conex_comp.end());
    printf("%d\n", conex_comp.size());
    for(int i=0;i<conex_comp.size();++i){
        for(int j=0;j<conex_comp[i].size();++j)
            printf("%d ",conex_comp[i][j]);
        printf("\n");
    }

    return 0;
}
