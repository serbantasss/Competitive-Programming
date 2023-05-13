#include <cstdio>
#define ll long long int
using namespace std;
ll factorial[5005];
ll calcf(int x)
{
    if(x==1)
        return factorial[1];
    factorial[x]=calcf(x-1)*(ll)x;
    return factorial[x];
}
int main()
{
    freopen("kperm.in","r",stdin);
    freopen("kperm.out","w",stdout);
    int n,k,i,j;
    scanf("%d%d",&n,&k);
    factorial[0]=(ll)1;
    factorial[1]=(ll)1;
    factorial[n]=calcf(n);
    int cat1=n%k,cat2=k-n%k,cat3=n/k;
    ll ip=(factorial[cat1]*factorial[cat2])%666013;
    for(i=1;i<=cat1;++i)
        ip=(ip*factorial[cat3+1])%666013;
    for(i=1;i<=cat2;++i)
        ip=(ip*factorial[cat3])%666013;
    if(k%2==0)
        printf("0");
    else
        printf("%lld",ip);
    return 0;
}
