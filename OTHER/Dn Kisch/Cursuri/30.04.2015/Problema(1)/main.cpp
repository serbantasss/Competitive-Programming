#include <iostream>
#include <cmath>
using namespace std;
const double eps=1.e-14;///10^-14
const double INF=1.e9;///10^9
///INF poate lua valoare maxima 10^237
struct POINT
{
    double x,y;
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
          return ((double)B.y-A.y)/(B.x-A.x);
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
double dist_point_segm(POINT C,POINT A,POINT B)
{
    double a,b,c;
    a=A.y-B.y;
    b=A.x-B.x;
    c=A.x*B.y-A.x*A.y;
    return fabs(a*C.x+b*C.y+c)/sqrt(a*a+b*b);
}
int main()
{
    POINT A,B,C,D,P,mij1,mij2;
    double d1,d2;
    cin>>A.x>>A.y;
    cin>>B.x>>B.y;
    cin>>C.x>>C.y;
    cin>>D.x>>D.y;
    cin>>P.x>>P.y;
    ///1.Sa se calculeze perimetrul patrulaterului ABCD
    cout<<"1)\n";
    double s;
    s=dist(A,B)+dist(B,C)+dist(C,D)+dist(D,A);
    cout<<s<<endl;;
    ///2.Sa se verifice daca ABCD este un paralelogram
    cout<<"2)\n";
    mij1=mijloc(A,C);
    mij2=mijloc(B,D);
    bool ok;
    if(same_point(mij1,mij2)==true)
        cout<<"DA"<<endl,ok=true;
    else
        cout<<"NU"<<endl,ok=false;
    ///3.Sa se verifice daca este dreptunghi
    cout<<"3)\n";
    if(ok==true)
    {
        d1=dist(A,C);
        d2=dist(B,D);
        if(fabs(d1-d2)<eps)
            cout<<"E dreptunghi"<<endl;
        else
            cout<<"Nu e dreptunghi"<<endl,ok=false;
    }
    else
       cout<<"Nu e dreptunghi"<<endl;
    ///4.Sa se verifice daca e patrat
    cout<<"4)\n";
    if(ok==true && fabs(dist(A,D)-dist(B,C))<eps)
        cout<<"Este patrat\n";
    else
        cout<<"Nu este patrat\n";
    ///5.Sa se verifice daca este romb
    cout<<"5)\n";
    if(perpendiculare(A,C,B,D))
        cout<<"E romb"<<endl;
    else
        cout<<"Nu e romb"<<endl;
    ///6.Sa se afiseze aria triunghiului
    cout<<"6)\n"<<aria_triunghi(D,B,C)<<endl;
    ///7.Sa se verifice daca P este in interiorul lui ABD
    cout<<"7)\n"<<punct_interior_triunghi(A,B,D,P);
    return 0;
}
