//
//  main.cpp
//  cowtipping
//
//  Created by Serban Bantas on 26/12/2019.
//  Copyright © 2019 Serban Bantas. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
int mat[15][15];
int main(int argc, const char * argv[]) {
    freopen("cowtip.in","r",stdin);
    freopen("cowtip.out","w",stdout);
    int n,verif=0,nr=0;
    scanf("%d",&n);
    for(int i=1;i<=n;++i)
        for(int j=1;j<=n;++j)
        {
            scanf("%1d",&mat[i][j]);
            verif+=mat[i][j];
        }
    if(!verif)
    {
        printf("%d",nr);
        return 0;
    }
    for(int i=n;i>=1;--i)
    {
        for(int j=n;j>=1;--j)
            if(mat[i][j])
            {
                for(int k=1;k<=i;++k)
                    for(int p=1;p<=j;++p)
                        if(mat[k][p])
                        {
                            verif--;
                            mat[k][p]=0;
                        }
                        else
                        {
                            verif++;
                            mat[k][p]=1;
                        }
                nr++;
                if(!verif)
                {
                    printf("%d",nr);
                    return 0;
                }
            }
    }
    return 0;
}
