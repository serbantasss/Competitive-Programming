//
//  main.cpp
//  convention
//
//  Created by Serban Bantas on 29/12/2019.
//  Copyright © 2019 Serban Bantas. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
int v[100005];
bool verif(int timp,int n,int m,int c)
{
    int nr=1,init=v[1],vaci=1;
    for(int i=2;i<=n;++i)
        if(v[i]-init>timp || vaci>=c)
        {
            init=v[i];
            vaci=1;
            nr++;
        }
        else
            vaci++;
    if(nr>m)
        return 0;
    return 1;
}
int main(int argc, const char * argv[]) {
    freopen("convention.in","r",stdin);
    freopen("convention.out","w",stdout);
    int n,m,c;
    scanf("%d%d%d",&n,&m,&c);
    for(int i=1;i<=n;++i)
        scanf("%d",&v[i]);
    sort(v+1,v+n+1);
    int st,dr,mid,ans;
    st=1;
    dr=2000000000;
    while(st<=dr)
    {
        mid=(st+dr)/2;
        if(verif(mid,n,m,c))
        {
            ans=mid;
            dr=mid-1;
        }
        else
            st=mid+1;
    }
    printf("%d",ans);
    return 0;
}
