#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <vector>
using namespace std;
const double eps=1.e-14;
const double  INF=2.e9;
struct POINT
{
    double x,y,r;
    bool frec;
};
vector<POINT>v;
int nrc;
double dist(POINT A,POINT B)
{
    return sqrt((A.x-B.x)*(A.x-B.x)+(A.y-B.y)*(A.y-B.y));
}
void explosie(int ind)
{
    int i;
    v[ind].frec=1;
    nrc++;
    for(i=0; i<v.size(); ++i)
        if(v[i].frec==0 && dist(v[i],v[ind])<=v[ind].r)
            explosie(i);
}
int main()
{
    freopen("explosion.in","r",stdin);
    freopen("explosion.out","w",stdout);
    int n,k,i,j,x,y,r;
    POINT op;
    scanf("%d%d",&n,&k);
    for(i=1; i<=n; ++i)
    {
        scanf("%d%d%d",&x,&y,&r);
        op.x=x;
        op.y=y;
        op.r=r;
        op.frec=0;
        v.push_back(op);
    }
    explosie(k-1);
    printf("%d",n-nrc);
    return 0;
}
