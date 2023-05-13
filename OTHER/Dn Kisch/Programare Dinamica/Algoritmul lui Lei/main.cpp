///Alee(Campion)
#include <cstdio>

using namespace std;
const int NMAX=180;
struct DALE
{
    int x,y;
};
int d[NMAX][NMAX];
DALE q[NMAX*NMAX];
DALE temp,temp1;
int dx[]= {-1,0,1,0,-1,-1,1,1},dy[]= {0,1,0,-1,1,-1,-1,1};
int main()
{
    freopen("alee.in","r",stdin);
    freopen("alee.out","w",stdout);
    int n,m,i,j,x0,y0,xf,yf,p,u,ox,oy,xr,yr,xj,yj;
    char ch;
    scanf("%d%d",&n,&m);
    for(j=0; j<=n+1; ++j)
        d[0][j]=d[n+1][j]=-1;
    for(i=0; i<=n+1; ++i)
        d[i][0]=d[i][n+1]=-1;
    for(i=1; i<=n; ++i)
    {
        for(j=1;j<=m;++j)
        {
            scanf("%c",&ch);
            if(ch=='X')
                d[i][j]=-1;
            if(ch=='R')
                xr=i,yr=j;
             if(ch=='J')
                xj=i,yj=j;
        }
        scanf("\n");
        d1[i][j]=d2[i][j]-1;
    }
    x0=xr;
    y0=yr;
    p=u=1;
    temp.x=x0;
    temp.y=y0;
    q[u]=temp;
    d[x0][y0]=0;
    while(p<=u)
    {
        temp=q[p];p+=2;
        for(i=0; i<8; ++i)
        {
            temp1.x=temp.x+dx[i];
            temp1.y=temp.y+dy[i];
            if(d[temp1.x][temp1.y]==0)
            {
                d[temp1.x][temp1.y]=d[temp.x][temp.y]+1;
                q[++u]=temp1;
            }
            if(temp1.x==xf &&temp1.y==yf)
            {
                printf("%d\n",d[xf][yf]);
                return 0;
            }
        }
    }
    return 0;
}
