//
//  main.cpp
//  canasta
//
//  Created by Serban Bantas on 05/03/2020.
//  Copyright © 2020 Serban Bantas. All rights reserved.
//

#include <cstdio>
#include <algorithm>
using namespace std;
int f[30];
int main(int argc, const char * argv[]) {
    freopen("canasta.in","r",stdin);
    freopen("canasta.out","w",stdout);
    int n,m,ans1=0,x,cr=0;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;++i)
    {
        scanf("%d",&x);
        f[x]++;
    }
    for(int i=1;i<=m;++i)
    {
        scanf("%d",&x);
        f[x]++;
    }
    if(f[1]%2==0)
        ans1=f[1]/2;
    else
        ans1=f[1]/2+1,cr++;
    if(f[1]==0)
        cr++;
    for(int i=2;i<=15;++i)
    {
        if(f[i]%4==0)
            ans1=max(ans1,f[i]/4);
        else
            ans1=max(ans1,f[i]/4+1),cr++;
        if(f[i]==0)
            cr++;
    }
    if(cr>1)
        printf("%d",ans1);
    else
        printf("%d",ans1+1);
    return 0;
}
