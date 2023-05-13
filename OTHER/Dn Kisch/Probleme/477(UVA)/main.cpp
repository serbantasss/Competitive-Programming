#include <cstdio>
#include <cmath>
using namespace std;
const double eps=1.e-14;///10^-14
const double INF=1.e9;///10^9
///INF poate lua valoare maxima 10^237
struct POINT
{
    double x,y;
};
struct DREPT
{
    int fig;
    POINT st,dr;
};
struct CERC
{
    int fig;
    double r;
    POINT C;
};
POINT mijloc(POINT A,POINT B)
{
    POINT M;
    M.x=(A.x+B.x)*0,5;
    M.y=(A.y+B.y)*0.5;
    return M;
}
double dist(POINT A,POINT B)
{
    return sqrt((B.x-A.x)*(B.x-A.x)+(B.y-A.y)*(B.y-A.y));
}
bool same_point(POINT A,POINT B)
{
    return fabs(A.x-B.x)<eps and fabs(B.y-A.y)<eps;
}
 bool vertical(POINT A,POINT B)
 {
     return fabs(B.x-A.x)<eps;
 }
 bool orizontala(POINT A,POINT B)
 {
     return fabs(B.y-A.y)<eps;
 }
double panta(POINT A,POINT B)
{
    if(vertical(A,B))
          return INF;
    else
          return (B.y-A.y)/(B.x-A.x);
}
bool paralele(POINT A,POINT B,POINT C,POINT D)
{
    double p1,p2;
    p1=panta(A,B);
    p2=panta(C,D);
    return fabs(p1-p2)<eps;
}
bool perpendiculare(POINT A,POINT B,POINT C,POINT D)
{
    if((vertical(A,B) &&orizontala(C,D))||(vertical(C,D) &&orizontala(A,B)))
        return 1;
    double p1,p2;
    p1=panta(A,B);
    p2=panta(C,D);
    return fabs(p1*p2+1)<eps;
}
double aria_triunghi(POINT A,POINT B,POINT C)
{
    double p;
    p=(dist(A,B)+dist(B,C)+dist(C,A))/2;
    return sqrt(p*(p-dist(A,B))*(p-dist(B,C))*(p-dist(C,A)));
}
bool punct_interior_triunghi(POINT A,POINT B,POINT C,POINT P)
{
    double s=aria_triunghi(A,B,P)+aria_triunghi(B,P,C)+aria_triunghi(A,P,C);
    return fabs(s-aria_triunghi(A,B,C))<eps;
}
bool punct_interior_dreptunghi(DREPT D,POINT P)
{
    return P.x-D.st.x>=eps && D.dr.x-P.x>=eps && P.y-D.dr.y>=eps && D.st.y-P.y>=eps;
    }
bool punct_interior_cerc(CERC C,POINT P)
{
    return ((P.y-C.C.y)*(P.y-C.C.y)+(P.x-C.C.x)*(P.x-C.C.x)-(C.r)*(C.r))<=-eps;
}
DREPT dv[13];
CERC cv[13];
int main()
{
    char tip;
    int i,nc,nd;
    double a,b,c,d;
    i=nc=nd=0;
    i=-1;
    scanf("%c",&tip);
    while(tip!='*')
    {
        i++;
        if(tip=='r')
        {
            scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
            nd++;
            dv[nd].st.x=a;
            dv[nd].st.y=b;
            dv[nd].dr.x=c;
            dv[nd].dr.y=d;
            dv[nd].fig=i;
        }
        else
        {
            scanf("%lf%lf%lf",&a,&b,&c);
            nc++;
            cv[nc].C.x=a;
            cv[nc].C.y=b;
            cv[nc].r=c;
            cv[nc].fig=i;
        }
        scanf("\n");
        scanf("%c",&tip);
    }
    i=0;
    while(1)
    {
        scanf("%lf%lf",&a,&b);
        POINT P;
        bool ok=false;
        P.x=a,P.y=b;
        if(fabs(a-9999.9)<eps && fabs(a-9999.9)<eps)
            break;
        ++i;
        for(int j=1;j<=nd;++j)
            if(punct_interior_dreptunghi(dv[j],P))
                printf("Point %d is contained in figure %d\n",i,dv[j].fig),ok=true;
        for(int j=1;j<=nc;++j)
            if(punct_interior_cerc(cv[j],P))
                 printf("Point %d is contained in figure %d\n",i,cv[j].fig),ok=true;
        if(ok==false)
            printf("Point %d is not contained in any figure\n",i);
    }
    return 0;
}
