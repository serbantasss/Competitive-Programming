#include <bits/stdc++.h>
using namespace std;
int mat[105][105];
int v[10005];
int p[10005];
long long h[10005];
long long lcoem(int st,int dr)
{
    if(st==dr)
        return h[st];
    if(st==dr-1)
        return h[st]*h[dr]/__gcd(h[st],h[dr]);
    long long x=lcoem(st,dr/2),y=lcoem(dr/2+1,dr);
    return x*y
}
int main()
{
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    int n,m,i,j,k=1
    long long aux;
    scanf("%d%d\n",&n,&m);
    for(i=1;i<=n;++i)
        for(j=1;j<=n;++j)
            mat[i][j]=k++;
    for(i=1;i<=m;++i)
    {
        char ch;
        scanf("%c",&ch);
        if(ch=='E')
        {
            int x,y,p,q;
            scanf("%d%d%d%d\n",&x,&y,&p,&q);
            aux=mat[x][y];
            mat[x][y]=mat[p][q];
            mat[p][q]=aux;
        }
        if(ch=='R')
        {
            int x,y;
            scanf("%d%d\n",&x,&y);
            for(j=1;j<=n;++j)
            {
                aux=mat[x][j];
                mat[x][j]=mat[y][j];
                mat[y][j]=aux;
            }
        }
        if(ch=='C')
        {
            int x,y;
            scanf("%d%d\n",&x,&y);
            for(j=1;j<=n;++j)
            {
                aux=mat[j][x];
                mat[j][x]=mat[j][y];
                mat[j][y]=aux;
            }
        }
    }
    k=0;
    for(i=1;i<=n;++i)
        for(j=1;j<=n;++j)
            v[++k]=mat[i][j];
    for(i=1;i<=n*n;++i)
        p[v[i]]=i;
    for(i=1;i<=n*n;++i)
    {
        aux=1;
        int ii=i;
        k=p[i];
        while(k!=i)
            k=p[k],aux++;
        h[i]=aux;
    }
    printf("%lld",lcoem(1,n*n));
    return 0;
}
