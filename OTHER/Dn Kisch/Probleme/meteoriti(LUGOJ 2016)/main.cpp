#include <cstdio>
using namespace std;
bool f[10005];
int main()
{
    freopen("meteoriti.in","r",stdin);
    freopen("meteoriti.out","w",stdout);
    int n,k,st,dr,p,i,dist=0,m,x,l,lmax;
    scanf("%d",&p);
    scanf("%d%d%d",&n,&m,&k);
    if(p==1)
    {
        st=1;
        dr=m;
        for(i=1; i<=k; ++i)
        {
            scanf("%d",&x);
            if(x>=st && x<=dr)
                continue;
            if(x>dr)
            {
                dist=dist+x-dr;
                dr=x;
                st=dr-m+1;
            }
            else
            {
                dist=dist+st-x;
                st=x;
                dr=st+m-1;
            }
        }
        printf("%d",dist);
    }
    else
    {
        for(i=1; i<=n; ++i)
        {
            scanf("%d",&x);
            f[x]=1;
        }
        l=lmax=0;
        for(i=1; i<=n; ++i)
        {
            if(f[i]==0)
                l++;
            else
            {
                if(l>lmax)
                {
                    lmax=l;
                    dr=i-1;
                    st=dr-lmax+1;
                }
                l=0;
            }
        }
        if(l>lmax)
        {
            lmax=l;
            dr=i-1;
            st=dr-lmax+1;
        }
        l=0;
        printf("%d %d",st,dr);
    }
    return 0;
}
