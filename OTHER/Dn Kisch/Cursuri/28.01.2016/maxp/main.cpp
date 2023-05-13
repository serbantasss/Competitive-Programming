#include <cstdio>

using namespace std;
const int INF=1000005;
const int NMAX=200000;
int v[NMAX+5],st[NMAX+5],L[NMAX+5],R[NMAX+5];
int main()
{
    freopen("maxp.in","r",stdin);
    freopen("maxp.out","w",stdout);
    int n,i,top;
    long long nrs,nrsmax,ap;
    scanf("%d",&n);
    v[0]=v[n+1]=0;
    for(i=1;i<=n;++i)
        scanf("%d",&v[i]);
    top=0;st[top]=0;
    for(i=1;i<=n;++i)
    {
        while(top>0 && v[i]>v[st[top]])
            top--;
        L[i]=st[top];
        st[++top]=i;
    }
    top=0;st[top]=n+1;
    for(i=n;i>=1;--i)
    {
        while(top>0 && v[i]>v[st[top]])
            top--;
        R[i]=st[top];
        st[++top]=i;
    }
    nrs=nrsmax=ap=0;
    for(i=1;i<=n;++i)
    {
        nrs=1LL*(i-L[i])*(R[i]-i);
        if(nrs>nrsmax)
        {
            nrsmax=nrs;
            ap=1;
        }
        else
            if(nrs==nrsmax)
                ap++;
    }
    printf("%d\n%d",nrsmax,ap);
    return 0;
}
