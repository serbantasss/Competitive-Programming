#include <cstdio>
using namespace std;
int v[10001],c[10001];
int main()
{
    freopen("bete1.in","r",stdin);
    freopen("bete1.out","w",stdout);
    int n,k,max1,max2,s,i,j,poz1,poz2,i1;
    scanf("%d",&n);
    poz1=poz2=k=max1=max2=s=0;
    for(i=1; i<=n; ++i)
    {
        scanf("%d",&v[i]);
        s+=v[i];
        if(v[i]>max1)
            max1=v[i],poz1=i;
    }
    for(i=1; i<=n; ++i)
    {
        scanf("%d",&c[i]);
        s+=c[i];
        if(c[i]>max2)
            max2=c[i],poz2=i;
    }
    printf("%d\n%d\n",s/n,max1+max2);
    int ap1=0,ap2=0;
    for(i=1;i<=n;++i)
        if(max1==v[i])
          ap1++;
    for(i=1;i<=n;++i)
          if(max2==c[i])
              ap2++;
    if(ap1>ap2)
        printf("%d",ap2);
    else
        printf("%d",ap1);
    return 0;
}
