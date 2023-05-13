#include <cstdio>

using namespace std;
int a[105][105];
bool f[105][105];
int main()
{
    freopen("biliard.in","r",stdin);
    freopen("biliard.out","w",stdout);
    int n,m,i,j,x,y,d,pi,pj,nr=1,nr1=0;
    scanf("%d%d%d%d%d",&n,&m,&pi,&pj,&d);
    x=pi;
    y=pj;
    while(1)
    {
        a[x][y]=nr;
        if(f[x][y]==1)
            nr1++;
        else
            f[x][y]=1;
        nr++;
        switch(d)
        {
        case 1:
            x--,y++;
        case 2:
            x++,y++;
        case 3:
            x++,y--;
        case 4:
            x--,y--;
        }
        d++;
        if(d==5)
            d=1;
        if(x==1 && y==m)
            break;
        if(x==1 && y==1)
            break;
        if(x==n &&y==m)
            break;
        if(x==n && y==1)
            break;
        if(x==pi && y==pj)
            break;
        if(nr1>1)
        {
            printf("Bila nu poate iesi de pe tabla\n");
            break;
        }
    }
    for(i=1;i<=n;++i)
    {
        for(j=1;j<=m;++j)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    return 0;
}
