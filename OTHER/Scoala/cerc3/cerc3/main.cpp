//
//  main.cpp
//  cerc3- infoarena
//
//  Created by Serban Bantas on 30/01/2020.
//  Copyright � 2020 Serban Bantas. All rights reserved.
//
#include <bits/stdc++.h>
using namespace std;
const double pi=3.14159265358979323846264338327950288;
const double eps=1.e-14;///10^-14
const double INF=1.e9;///10^9
///INF poate lua valoare maxima 10^237
struct POINT
{
    double x,y;
};

struct CERC
{
    double x,y,r;
};
inline double dist(POINT A,POINT B)
{
    return sqrt((B.x-A.x)*(B.x-A.x)+(B.y-A.y)*(B.y-A.y));
}
inline bool same_point(POINT A,POINT B)
{
    return fabs(A.x-B.x)<eps and fabs(B.y-A.y)<eps;
}
inline bool vertical(POINT A,POINT B)
{
    return fabs(B.x-A.x)<eps;
}
inline bool orizontala(POINT A,POINT B)
{
    return fabs(B.y-A.y)<eps;
}
inline double panta(POINT A,POINT B)
{
    if(vertical(A,B))
        return INF;
    else
        return (B.y-A.y)/(B.x-A.x);
}
POINT inceput(CERC C,double p)
{
    return {C.x-C.r*sqrt(1/(1+p*p)),C.y-p*C.r*sqrt(1/(1+p*p))};
}
POINT sfarhit(CERC C,double p)
{
    return {C.x+C.r*sqrt(1/(1+p*p)),C.y+p*C.r*sqrt(1/(1+p*p))};
}
CERC v[2005];
double pdr[2005],pcerc[2005];
vector<int> drepte[2005];
bool lolxd(int a,int b)
{
    return sfarhit(v[a],pcerc[a]).x<sfarhit(v[b],pcerc[b]).x;
}
int main(int argc, const char * argv[])
{
    freopen("cerc3.in","r",stdin);
    freopen("cerc3.out","w",stdout);
    int n,m=0,nr=0,lmax=0;
    scanf("%d",&n);
    for(int i=1;i<=n;++i)
        scanf("%lf%lf%lf",&v[i].x,&v[i].y,&v[i].r);
    pdr[++m]=panta({0,0},{v[1].x,v[1].y});
                              pcerc[1]=panta({0,0},{v[1].x,v[1].y});
    drepte[m].push_back(1);
    for(int i=2;i<=n;++i)
    {
        bool ok=1;
        pcerc[i]=panta({0,0},{v[i].x,v[i].y});
        for(int j=1;j<=m && ok;++j)
            if(fabs(pdr[j]-pcerc[i])<eps)
                drepte[j].push_back(i),ok=0;
        if(ok)
        {
            pdr[++m]=panta({0,0},{v[i].x,v[i].y});
            drepte[m].push_back(1);
        }
    }
    printf("%d ",m);
    for(int i=1;i<=m;++i)
    {
        sort(drepte[i].begin(),drepte[i].end(),lolxd);
        int l=1;
        CERC last=v[1];
        for(int j=1;j<drepte[i].size();++j)
            if(inceput(v[drepte[i][j]],pdr[i]).x>sfarhit(last,pdr[i]).x)
                l++,last=v[drepte[i][j]];
        if(l>lmax)
            lmax=l,nr=1;
        else
            if(lmax==l)
                nr++;
    }
    printf("%d %d",lmax,nr);
    return 0;
}
