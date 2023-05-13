#include <bits/stdc++.h>
using namespace std;
long long a[200005],b[200005];
long long sa[200005],sb[200005];
struct rezistenta
{
    long long d,m;
}v[200005];
int main()
{
   // freopen("tank.in","r",stdin);
    //freopen("tank.out","w",stdout);
    long long n,m,p,i,mata = 0;
    long long mi=LLONG_MAX;
    scanf("%lld%lld%lld",&n,&p,&m);
    for(i=1;i<=n;++i)
        scanf("%lld%lld",&v[i].d,&v[i].m);
    for(i=1;i<=p;++i)
        scanf("%lld",&a[i]);
    sort(a+1,a+p+1);
    for(i=1;i<=p;++i)
        sa[i]=sa[i-1]+a[i];
    for(i=1;i<=p;++i)
        scanf("%lld",&b[i]);
    sort(b+1,b+m+1);
    for(i=1;i<=m;++i)
        sb[i]=sb[i-1]+b[i];
    for(i=1;i<=n;++i)
    {
        long long damage=0;
        long long st=1,dr=p,mid = 0,sol = 0;
        if(v[i].d<a[p])
        {
            while(st<=dr)
            {
                mid=(st+dr)/2;
                if(a[mid]>v[i].d)
                {
                    dr=mid-1;
                    sol=mid;
                }
                else
                    st=mid+1;
            }
            damage=sa[p]-sa[sol-1]-(p-sol+1)*v[i].d;
        }
        if(v[i].m<b[m])
        {
            st=1;dr=m;
            while(st<=dr)
            {
                mid=(st+dr)/2;
                if(b[mid]>v[i].m)
                {
                    dr=mid-1;
                    sol=mid;
                }
                else
                    st=mid+1;
            }
            damage+=sb[m]-sb[sol-1]-(m-sol+1)*v[i].m;
        }
        if(damage<mi)
        {mi=damage;mata=i;}
    }
    printf("%lld",mata);
    return 0;
}
