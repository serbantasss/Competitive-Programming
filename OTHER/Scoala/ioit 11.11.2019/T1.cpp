#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    double x1,x2,x3,y1,y2,y3,r;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3,&r);
        double ans,a,b;
        a=fabs(x1-x3);
        a=a*a;
        b=fabs(y1-y3);
        b=b*b;
        ans=sqrt(a+b);
        a=fabs(x2-x3);
        a=a*a;
        b=fabs(y2-y3);
        b=b*b;
        ans+=sqrt(a+b);
        if(ans>2*r)
            printf("%.6lf\n",ans-2*r);
        else
            printf("0\n");
    }
    return 0;
}
