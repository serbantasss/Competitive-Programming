//
//  main.cpp
//  hoofpaperscissor
//
//  Created by Serban Bantas on 13/12/2019.
//  Copyright © 2019 Serban Bantas. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
char v[100005];
int dp[100005][25][5];
int main(int argc, const char * argv[]) {
    freopen("hps.in","r",stdin);
    freopen("hps.out","w",stdout);
    int n,i,j,t,k;
    scanf("%d%d",&n,&k);
    for(i=1;i<=n;++i)
        scanf("\n%c",&v[i]);
    for(i=1;i<=n+1;++i)
        for(j=0;j<=k;++j)
            for(t=1;t<=3;++t)
                if(i==1)
                {
                    dp[i][j][t]=0;
                }
                else
                    if(j==0)
                    {
                        dp[i][j][t]=dp[i-1][j][t];
                        if(t==1 && v[i-1]=='H')
                            dp[i][j][t]++;
                        if(t==2 && v[i-1]=='P')
                            dp[i][j][t]++;
                        if(t==3 && v[i-1]=='S')
                            dp[i][j][t]++;
                    }
                    else
                    {
                        if(t==1)
                            dp[i][j][t]=max(max(dp[i-1][j][t], dp[i-1][j-1][t+1]), dp[i-1][j-1][t+2]);
                        if(t==2)
                            dp[i][j][t]=max(max(dp[i-1][j][t], dp[i-1][j-1][t+1]), dp[i-1][j-1][t-1]);
                        if(t==3)
                            dp[i][j][t]=max(max(dp[i-1][j][t], dp[i-1][j-1][t-1]), dp[i-1][j-1][t-2]);
                        if(t==1 && v[i-1]=='H')
                            dp[i][j][t]++;
                        if(t==2 && v[i-1]=='P')
                            dp[i][j][t]++;
                        if(t==3 && v[i-1]=='S')
                            dp[i][j][t]++;
                    }
    printf("%d",max(max(dp[n+1][k][1], dp[n+1][k][2]), dp[n+1][k][3]));
    return 0;
}
