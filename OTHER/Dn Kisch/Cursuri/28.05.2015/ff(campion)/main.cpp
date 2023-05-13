#include <cstdio>
#include <cmath>
#include <cstdlib>
using namespace std;
const double eps=1.e-5;
const double INF=1.e9;
struct POINT
{
    int x,y;
};
POINT in[106],ex[106];
double dist(POINT A,POINT B)
{
    return sqrt((double)(B.x-A.x)*(B.x-A.x)+(B.y-A.y)*(B.y-A.y));
}
double dist_point_segm(POINT C,POINT A,POINT B)
{
    double la,lb,lc,cosA,cosB,a,b,c;
    la=dist(B,C);
    lb=dist(A,C);
    lc=dist(A,B);
    cosA=lb*lb+lc*lc-la*la;
    cosB=la*la+lc*lc-lb*lb;
    if(cosA<=-eps)
        return lb;
    else
        if(cosB<=-eps)
           return la;
      else
      {
        a=A.y-B.y;
        b=B.x-A.x;
        c=A.x*B.y-B.x*A.y;
        return fabs((double)a*C.x+b*C.y+c)/sqrt((double)a*a+b*b);
      }
}
int main()
{
    freopen("ff.in","r",stdin);
    freopen("ff.out","w",stdout);
    int n,m,i,a,b;
    double min=INF;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        scanf("%d%d",&a,&b);
        in[i].x=a;
        in[i].y=b;
    }
    scanf("%d",&m);
    for(i=1;i<=m;++i)
    {
        scanf("%d%d",&a,&b);
        ex[i].x=a;
        ex[i].y=b;
    }
    for(i=1;i<=n;++i)
        for(int j=1;j<m;++j)
        {
            double d=dist_point_segm(in[i],ex[j],ex[j+1]);
            if(d<min)
                min=d;
        }
    for(i=1;i<=m;++i)
        for(int j=1;j<n;++j)
        {
            double d=dist_point_segm(ex[i],in[j],in[j+1]);
            if(d<min)
                min=d;
        }
    printf("%.5lf",min);
    return 0;
}
