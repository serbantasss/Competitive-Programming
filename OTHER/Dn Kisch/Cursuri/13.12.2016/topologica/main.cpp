#include <cstdio>
#include <cstring>
#include <vector>
using namespace std;
#define MAXN 20005
int N, M, viz[MAXN], deg[MAXN],afisare[MAXN];
vector<int> G[MAXN];
void solve_and_write(void)
{
    int i, j, k,soln=0;
    for(i = 1; i <= N; i++)
    {
        for(j = 1; j <= N; j++)
         if(!viz[j] && deg[j] == 0)
         {
            viz[j] = 1, afisare[++soln]=j;
            for(k = 0; k < G[j].size(); k++)
                deg[ G[j][k] ]--;
            break ;
         }
    }
    if(soln<N)
        printf("0");
    else
        for(i = 1; i <= N; i++)
            printf("%d ",afisare[i]);
}
void read_data(void)
{
    int i,ok,j=0,v[3]={0,0,0},x,a,b;
    char ch,semn;
    scanf("%d %d\n", &N, &M);
    for(i = 1; i <= M; i++)
        {
            ///scanf("%d %d", &a, &b), G[a].push_back(b), deg[b]++;
            ok=1;
            x=0;
            v[0]=v[1]=v[2]=j=semn=0;
            while(1)
            {
                scanf("%c",&ch);
                if(ch=='\n')
                    break;
                if(ch=='>')
                {
                    if(ok)
                        {semn='>';
                        ok=0;}
                    v[j]=x;
                    x=0;
                    j++;
                }
                else
                    if(ch==',')
                {
                    if(ok)
                        {semn=',';
                        ok=0;}
                    v[j]=x;
                    x=0;
                    j++;
                }
                else
                {
                    x=x*10+ch-'0';
                }
            }
            v[j]=x;
            j++;
            if(semn=='>')
            {
                //printf("%d %d\n%d %d\n",v[1],v[0],v[2],v[0]);
                a=v[1];
                b=v[0];
                G[a].push_back(b), deg[b]++;
                a=v[2];
                b=v[0];
                G[a].push_back(b), deg[b]++;
            }
            else
            {
                //printf("%d %d\n%d %d\n",v[2],v[0],v[2],v[1]);
                a=v[2];
                b=v[0];
                G[a].push_back(b), deg[b]++;
                a=v[2];
                b=v[1];
                G[a].push_back(b), deg[b]++;
            }
        }
}
int main()
{
    freopen("dezbateri.in", "rt", stdin);
    freopen("dezbateri.out", "wt", stdout);
    read_data();
    solve_and_write();
    return 0;
}
