#include <cstdio>

using namespace std;
const int maxn=50;
int a[maxn+5][maxn+5];
int main()
{
    freopen("patrate.in","r",stdin);
    freopen("patrate.out","w",stdout);
    int n,m,i,j,nr,s,dx,dy,x,y;
    scanf("%d",&n);
    for(i=1; i<=n; ++i)
        for(j=1; j<=n; ++j)
            scanf("%d",&a[i][j]);
    nr=0;
    for(x=1; x<=n; ++x)
        for(y=1; y<=n; ++y)
            for(dx=1; dx<=n; ++dx)
                for(dy=1; dy<=n; ++dy)
                {
                    if(a[x][y]==1)
                        if(a[x+dx][y+dy]==1)
                            if(a[x+dy][y-dx]==1)
                                if(a[x+dx+dy][y-dx+dy]==1)
                                    nr++;
                }
    printf("%d",nr);
    return 0;
}
