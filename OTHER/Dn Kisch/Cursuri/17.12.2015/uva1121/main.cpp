#include <cstdio>
using namespace std;
const int NMAX=100000;
int v[NMAX+5];
int main()
{
    freopen("uva1121.in","r",stdin);
    freopen("uva1121.out","w",stdout);
    int n,s,sum,st,dr,lmin,i,l;
    while(scanf("%d%d",&n,&s)!=EOF)
    {
        for(i=1;i<=n;++i)
            scanf("%d",&v[i]);
        lmin=NMAX+5;
        for(st=1,dr=1,sum=0;dr<=n;++dr)
        {
            sum+=v[dr];
            while(sum>=s)
            {
                l=dr-st+1;
                if(l<lmin)
                    lmin=l;
                sum-=v[st];
                st++;
            }
        }
        if(lmin==n+1)
            printf("0\n");
        else
            printf("%d\n",lmin);
    }
    return 0;
}
