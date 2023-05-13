//
//  main.cpp
//  traseu4
//
//  Created by Serban Bantas on 24/01/2020.
//  Copyright © 2020 Serban Bantas. All rights reserved.
//

#include <cstdio>
#include <algorithm>
using namespace std;
int mat[505][505];
int main(int argc, const char * argv[]) {
    freopen("traseu4.in","r",stdin);
    freopen("traseu4.out","w",stdout);
    int n,m,i,j;
    int ans=0;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
        for(j=1;j<=m;++j)
            scanf("%d",&mat[i][j]);
    for(i=1;i<=n;++i)
        for(j=1;j<=m;++j)
            for(int i1=i;i1<=n;++i1)
                for(int j1=j;j1<=m;++j1)
                    if(mat[i][j]<mat[i1][j1])
                        ans=max(ans,i1-i+j1-j+1);
    printf("%d\n",ans);
    return 0;
}
