#include<iostream>
using namespace std;
int pinf=1000;
int a[105][105],n,m;
void genarare_matrice_drumuri_optime()
{
    for(int k=1; k<=n; k++)
        for(int i=1; i<=n; i++)
            for(int j=1; j<=n; j++)
                if(a[i][j]>a[i][k]+a[k][j])
                    a[i][j]=a[i][k]+a[k][j];
}
void descompun_drum(int i,int j)
{
    int g=0,k=1;
    while(k<=n&&!g)
    {
        if(i!=k&&j!=k)
            if(a[i][j]==a[i][k]+a[k][j])
            {
                descompun_drum(i,k);
                descompun_drum(k,j);
                g=1;
            }
        k++;
    }
    if(!g)
        cout<<j<<" ";

}
void scriu_drum(int u,int v)
{
    if(a[u][v]<pinf)
    {
        cout<<a[u][v]<<endl;
        cout<<u<<" ";
        descompun_drum(u,v);
    }
}
int main()
{
    int i,j,x,y,c,p,q;
    cin>>n>>m>>p>>q;
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            if(i==j)
                a[i][j]=0;
            else
                a[i][j]=pinf;
    for(i=1; i<=m; i++)
    {
        cin>>x>>y;
        a[x][y]=a[y][x]=1;
    }
    genarare_matrice_drumuri_optime();
    scriu_drum(p,q);
    return 0;
}
