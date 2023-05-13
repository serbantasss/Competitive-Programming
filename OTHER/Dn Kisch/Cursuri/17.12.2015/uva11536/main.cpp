#include <cstdio>
#include <cstring>
using namespace std;
const int NMAX=1000000;
int f[105],v[NMAX+5];
int main()
{
    freopen("uva11536.in","r",stdin);
    freopen("uva11536.out","w",stdout);
    int n,m,k,t,it,i,lmin,st,dr,nr,l;
    scanf("%d",&t);
    v[1]=1;
    v[2]=2;
    v[3]=3;
    for(it=1; it<=t; ++it)
    {
        scanf("%d%d%d",&n,&m,&k);
        for(i=4; i<=n; ++i)
            v[i]=(v[i-1]+v[i-2]+v[i-3])%m+1;
        if(k<=3)
        {
            printf("Case %d: %d",it,k);
        }
        else
        {
            lmin=n+5;
            for(st=dr=1,nr=0; dr<=n; ++dr)
            {
                if(v[dr]>k)
                    continue;
                if(f[v[dr]]==0)
                    nr++;
                f[v[dr]]++;
                while(st<n && nr==k)
                {
                    l=dr-st+1;
                    if(lmin>l)
                        lmin=l;
                    if(v[st]<=k)
                    {
                        f[v[st]]--;
                        if(f[v[st]]==0)
                            nr--;
                    }
                    st++;
                }
            }
            if(lmin==n+5)
                printf("Case %d: sequence nai\n",it);
            else
                printf("Case %d: %d\n",it,lmin);
            memset(f,0,sizeof(f));
        }
    }
    return 0;
}
