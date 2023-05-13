//
//  main.cpp
//  pairs
//
//  Created by Serban Bantas on 29/11/2019.
//  Copyright © 2019 Serban Bantas. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
map<int,long long> mp;
int main(int argc, const char * argv[])
{
    freopen("pairs.in","r",stdin);
    freopen("pairs.out","w",stdout);
    int n,i,x;
    long long ans=0;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        scanf("%d",&x);
        int d=2,p;
        while(x>1)
        {
            p=0;
            while(x%d==0)
                p++,x/=d;
            if(p)
                mp[d]++;
            d++;
            if(n>1 && d*d>x)
                d=x;
        }
    }
    map<int,long long>::iterator it;
    for(it=mp.begin();it!=mp.end();++it)
        ans=ans+(it->second)*(it->second-1)/2;
    ans=1LL*n*(n-1)/2-ans;
    printf("%lld",ans);
    return 0;
}
