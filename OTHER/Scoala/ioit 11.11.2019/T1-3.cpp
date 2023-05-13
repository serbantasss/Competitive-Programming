#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int x1,x2,x3,y1,y2,y3,r;
    cin>>t;
    while(t--)
    {
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>r;
        long double ans,a,b,dr;
        a=fabs((double)x1-x3);
        a=a*a;
        b=fabs((double)y1-y3);
        b=b*b;
        ans=sqrt(a+b);
        a=fabs((double)x2-x3);
        a=a*a;
        b=fabs((double)y2-y3);
        b=b*b;
        ans+=sqrt(a+b);
        a=fabs((double)x1-x2);
        a=a*a;
        b=fabs((double)y1-y2);
        b=b*b;
        dr=sqrt(a+b);
        if(ans>2*r)
            ans=ans-2*r;
        else
            ans=0;
        long long ans1=ans*10000000;
        long long dr1=dr*10000000;
        if(ans1%10>=5)
            ans1=ans1-5;
        if(dr1%10>=5)
            dr1=dr1-5;
        ans1/=10;
        dr1/=10;
        if(dr1>ans1)
            cout<<fixed<<setprecision(6)<<(double)ans1/1000000<<endl;
        else
            cout<<fixed<<setprecision(6)<<(double)dr1/1000000<<endl;
    }
    return 0;
}
