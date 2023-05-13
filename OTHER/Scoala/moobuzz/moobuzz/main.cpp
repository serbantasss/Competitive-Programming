//
//  main.cpp
//  moobuzz
//
//  Created by Serban Bantas on 14/12/2019.
//  Copyright © 2019 Serban Bantas. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
long long verif(long long x)
{
    return x/3+x/5-x/15;
}
int main(int argc, const char * argv[]) {
    freopen("moobuzz.in","r",stdin);
    freopen("moobuzz.out","w",stdout);
    long long st,dr,mid,n;
    scanf("%lld",&n);
    st=1;
    dr=LLONG_MAX;
    while(st<=dr)
    {
        mid=(st+dr)/2;
        long long ans=mid-verif(mid);
        if(ans==n && mid%3!=0 && mid%5!=0)
        {
            printf("%lld",mid);
            return 0;
        }
        else
            if(ans>n)
                dr=mid-1;
            else
                st=mid+1;
    }
    return 0;
}
