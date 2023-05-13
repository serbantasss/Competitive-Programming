//
//  main.cpp
//  burtcasiisgay
//
//  Created by Serban Bantas on 03/03/2020.
//  Copyright © 2020 Serban Bantas. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
int mamacojoxxx[10000005];
int pct[100005][2],mutari[100005];
int main(int argc, const char * argv[]) {
    int n,m,k,xs,ys,xf,yf,inds=-1,indf=-1,mamacojo;
    long long distmi=LLONG_MAX;
    scanf("%d%d%d%d%d%d%d",&n,&m,&k,&xs,&ys,&xf,&yf);
    for(int i=1;i<=k;++i)
    {
        scanf("%d%d",&pct[i][0],&pct[i][1]);
        if(pct[i][0]==xs && pct[i][1]==ys)
            inds=i;
        if(pct[i][0]==xf && pct[i][1]==yf)
            indf=i;
    }
    if(inds==-1 || indf==-1)
    {
        printf("-1");
        return 0;
    }
    for(int i=1;i<=k;++i)
        mutari[i]=i;
    do
    {
        int si,fi;
        for(int i=1;i<=k;++i)
            if(mutari[i]==inds)
                si=i;
            else
                if(mutari[i]==indf)
                    fi=i;
        if(si>fi)
            continue;
        long long dist=0;
        for(int i=si;i<fi;++i)
            dist+=(pct[mutari[i]][0]-pct[mutari[i+1]][0])*(pct[mutari[i]][0]-pct[mutari[i+1]][0])+abs(pct[mutari[i]][1]-pct[mutari[i+1]][1]);
        if(distmi>dist)
        {
            distmi=dist;
            mamacojoxxx[0]=fi-si+1;
            for(int j=1,i=si;i<=fi;++i,++j)
                mamacojoxxx[j]=mutari[i];
        }
    }while(next_permutation(mutari+1,mutari+k+1));
    printf("%lld\n",distmi);
    for(int i=1;i<=mamacojoxxx[0];++i)
        printf("%d %d\n",pct[mamacojoxxx[i]][0],pct[mamacojoxxx[i]][1]);
    return 0;
}
