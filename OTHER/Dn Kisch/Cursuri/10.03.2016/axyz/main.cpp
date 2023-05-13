#include <cstdio>
#include <algorithm>
using namespace std;
int v[30005];
bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
    freopen("axyz.in","r",stdin);
    freopen("axyz.out","w",stdout);
    int n,i,A,p,j,max,poz;
    scanf("%d%d%d",&p,&A,&n);
    for(i=1; i<=n; ++i)
        scanf("%d",&v[i]);
    if(p==1)
    {
        for(i=n-1; i>=1 && v[i]<=v[i+1]; i--);
        j=i;
        max=v[j+1];
        poz=j+1;
        for(i=j+1; i<=n; ++i)
            if(v[i]<v[j] && v[i]>max)
                max=v[i],poz=i;
        swap(v[j],v[poz]);
        sort(v+j+1,v+n+1,cmp);
        for(i=1; i<=n; ++i)
            printf("%d ",v[i]);
        return 0;
    }
    int nb,nc,a,b,c;
    long long ans=0;
    if(A>=10 && A<=99)
    {
        a=A/10%10;
        b=A%10;
        nb=0;
        for(i=n; i>=1; --i)
        {
            if(v[i]==b)
                nb++;
            if(v[i]==a)
                ans+=nb;
        }
    }
    else
    {
        a=A/100;
        b=A/10%10;
        c=A%10;
        nb=nc=0;
        for(i=n; i>=1; --i)
        {
            if(v[i]==c)
                nc++;
            if(v[i]==b)
                nb=nc;
            if(v[i]==a)
                ans+=nb;
        }
    }
    printf("%d",ans);
    return 0;
}

