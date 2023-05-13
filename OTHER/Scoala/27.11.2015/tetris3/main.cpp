#include <cstdio>
#include <cstring>

using namespace std;

int col[1001];

int main()
{
    freopen("tetris3.in","r",stdin);
    freopen("tetris3.out","w",stdout);
    int n,m,h=0,l=0,nr,i,j,max,a,b;
    scanf("%d%d",&n,&m);
    h=0;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        max=col[b];
        for (i=b; i<b+a; i++)
            if(col[i]>max)
                max=col[i];
        max+=a;
        if (max>n)
            break;
        if (b+a-1>m)
            break;
        for (i=b; i<b+a; i++)
            col[i]=max;
        if(h<max)
            h=max;
    }
    nr=0;
    l=0;
    for(i=1; i<=m; i++)
    {
        if(col[i]==h)
            nr++;
        else
            nr=0;
        if(nr>l)
            l=nr;
    }
    printf("%d\n%d",h,l);
    return 0;
}
