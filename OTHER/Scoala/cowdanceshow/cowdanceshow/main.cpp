//
//  main.cpp
//  cowdanceshow
//
//  Created by Serban Bantas on 13/12/2019.
//  Copyright © 2019 Serban Bantas. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
int timp[10005],tmax;
bool verif(int k,int n)
{
    vector<int> ms;
    if(k==n)
        return 1;
    int t=0,sc;
    for(int i=1;i<=k;++i)
        ms.push_back(timp[i]);
    for(int i=k+1;i<=n;++i)
    {
        sort(ms.begin(),ms.end());
        t+=ms[0];
        sc=ms[0];
        for(int j=0;j<k;++j)
            ms[j]-=sc;
        ms.erase(ms.begin());
        ms.push_back(timp[i]);
    }
    t+=ms[k-1];
    return t<=tmax;
}
int main(int argc, const char * argv[]) {
    freopen("cowdance.in","r",stdin);
    freopen("cowdance.out","w",stdout);
    int n,i;
    scanf("%d%d",&n,&tmax);
    for(i=1;i<=n;++i)
        scanf("%d",&timp[i]);
    int st=1,dr=n,mid,ans;
    while(st<=dr)
    {
        mid=(st+dr)/2;
        if(verif(mid,n))
            ans=mid,dr=mid-1;
        else
            st=mid+1;
    }
    printf("%d",ans);
    return 0;
}
