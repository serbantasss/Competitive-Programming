#include <cstdio>

using namespace std;
bool ciur[10000];
int main()
{
    freopen("suma.in","r",stdin);
    freopen("suma.out","w",stdout);
    int stm,drm,i,n,j,st,dr,x;
    long long sc,smax;
    ciur[1]=1;
    for(i=4; i<=9999; i+=2)
        ciur[i]=1;
    for(i=3; i*i<=9999; i+=2)
    {
        if(ciur[i]==0)
            for(j=i*i; j<=9999; j+=i<<1)
                ciur[j]=1;
    }
    scanf("%d",&n);
    st=1;
    dr=n;    scanf("%d",&x);
    if(ciur[x]==0)
        x*=(-1);
    st=stm=drm=1;
    sc=smax=x;
    for(i=2; i<=n; i++)
    {
        scanf("%d",&x);
        if(ciur[x]==0)
            x*=(-1);
        if(sc+x>x)
            sc+=x;
        else
        {
            st=i;
            sc=x;
        }
        if(sc>smax)
        {
            stm=st;
            drm=i;
            smax=sc;
        }


    }
    printf("%I64d\n%d %d",smax,stm,drm);
    return 0;
}
