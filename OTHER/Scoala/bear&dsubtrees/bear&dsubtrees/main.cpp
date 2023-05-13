//
//  main.cpp
//  bear&dsubtrees
//
//  Created by Serban Bantas on 29.09.2020.
//

#include <cstdio>
#include <functional>
#include <algorithm>

using namespace std;

long long v[100005],ans=100005,n;
void acasi(long long x,long long y,int c)
{
    if(x==0 && y==0)
    {
        if(ans>c)
            ans=c;
        return;
    }
    if(c==n+1) return;
    if(v[c]>2)
    {
        if(x>0)
            acasi(x/v[c],y,c+1);
        if(y>0)
            acasi(x,y/v[c],c+1);
    }
    while(x>0)
        x/=2,c++;
    while(y>0)
        y/=2,c++;
    if(ans>c)
        ans=c;
    return;
}
int main(int argc, const char * argv[]) {
    long long a,b,x,y;
    scanf("%lld%lld%lld%lld%lld",&a,&b,&x,&y,&n);
    for(int i=1;i<=n;++i)
        scanf("%lld",&v[i]);
    sort(v+1,v+n+1,greater<int>());
    ans=n+2;
    acasi((a-1)/x,(b-1)/y,1);
    acasi((a-1)/y,(b-1)/x,1);
    if(ans==n+2)
        printf("-1");
    else
        printf("%lld",ans-1);
    return 0;
}
