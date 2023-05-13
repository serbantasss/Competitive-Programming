#include <bits/stdc++.h>
using namespace std;
int f[30],n,k,l,f1[30];
long long ma=0;
char s[100005];
long long solve()
{
    for(int i=1;i<=26;++i)
        f1[i]=f[i];
    sort(f+1,f+27);
    int ck=k
    for(int i=26;i>=1 && k;--i)
        if(f[i]<ck)
            ck-=f[i],f[i]=0;
        else
            f[i]-=ck,k=0;
    long long ans=0;
    for(int i=1;i<=26;++i)
        ans+=f[i]*f[i];
    return ans;
}
int main()
{
    gets(s);
    scanf("%d %d",&l,&k);
    n=strlen(s);
    if(l+k>=n || l>=n || k>=n)
    {
        printf("0");
        return 0;
    }
    for(int i=0;i<n;++i)
        f[s[i]-'a'+1]++;
    if(l==0)
        printf("%lld",solve());
    for(int i=0;i<l;++i)
        f[s[i]-'a'+1]--;
    ma=solve();
    for(int i=0;i<=n-l;++i)
    {
        
    }
    return 0;
}
