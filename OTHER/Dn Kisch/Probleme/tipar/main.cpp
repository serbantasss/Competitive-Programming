#include <cstdio>
#include <cstring>
using namespace std;
struct patrat
{
    int n,csx,csy,cdx,cdy;
    char ch;
}v[55];
char s[2000];
int main()
{
    freopen("tipar.in","r",stdin);
    freopen("tipar.out","w",stdout);
    int n,m,i,j,x,y,lmax=0,cmax=0;
    char ch;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        scanf("%d %d %d %c",&m,&x,&y,&ch);
        v[i].n=m*4-1;
        v[i].csx=x;
        v[i].csy=y;
        v[i].cdx=x+m*4-2;
        v[i].cdy=y+m*4-2;
        v[i].ch=ch;
        if(x+m*4-1>lmax)
            lmax=x+m*4-1;
        if(y+m*4-1>cmax)
            cmax=y+m*4-1;
    }
    for(i=0;i<=lmax;++i)///linie cu linie
    {
        memset(s,' ',sizeof(s));
        for(int i1=1;i1<=n;++i1)///patrat cu patrat
            if(i>=v[i1].csx && i<=v[i1].cdx)
            {
                int l;
                if(v[i1].cdx-i+1<i-v[i1].csx+1)
                    l=v[i1].cdx-i+1;
                else
                    l=i-v[i1].csx+1;
                if(l%2==1)
                {
                    for(j=1;j<=l-1;j+=2)
                        s[j-1+v[i1].csy]=v[i1].ch;
                    for(j=l;j<=v[i1].n/2;j++)
                        s[j-1+v[i1].csy]=v[i1].ch;
                    //reverse
                    for(j=v[i1].n/2+1;j<=v[i1].n-l;j++)
                        s[j-1+v[i1].csy]=v[i1].ch;
                    for(j=v[i1].n-l+1;j<=v[i1].n;j+=2)
                        s[j-1+v[i1].csy]=v[i1].ch;
                }
                else
                {
                    for(j=1;j<=l-1;j+=2)
                        s[j-1+v[i1].csy]=v[i1].ch;
                    for(j=v[i1].n-l+1;j<=v[i1].n;j+=2)
                        s[j+v[i1].csy]=v[i1].ch;
                }
            }
        for(j=0;j<=cmax;++j)
            printf("%c",s[j]);
        printf("\n");
    }
    return 0;
}
