#include <bits/stdc++.h>
using namespace std;
const long long mod = 10000000;
int main()
{
    long long t;
    long long x1,x2,x,y1,y2,y,r;
    cin>>t;
    while(t--)
    {
        cin>>x1>>y1>>x2>>y2>>x>>y>>r;
        long long dist;
        long long ms,md,t1,t2;
        r=r*mod;
        x1=x1*mod;
        x2=x2*mod;
        x=x*mod;
        y1=y1*mod;
        y2=y2*mod;
        y=y*mod;
        
        if(x1>x2)
        {
            t1=x1-x2;
        }
        else t1=x2-x1;
        
        if(y1>y2)
        {
            t2=y1-y2;
        }
        else t2=y2-y1;
        dist = (long long)sqrt(t1*t1+t2*t2);
        long long dist1,dist2;
        if(x>x2)
        {
            t1=x-x2;
        }
        else t1=x2-x;
        
        if(y>y2)
        {
            t2=y-y2;
        }
        else t2=y2-y;
        dist1 = (long long)sqrt(t1*t1+t2*t2);
        if(x>x1)
        {
            t1=x-x1;
        }
        else t1=x1-x;
        
        if(y>y1)
        {
            t2=y-y1;
        }
        else t2=y1-y;
        dist1+=(long long)sqrt(t1*t1+t2*t2);
        dist1-=2*r;
        if(dist1<dist)
        {
            cout<<dist1 / mod << '.' << dist1%mod/10<<"\n";
        }
        else
            cout<<dist/mod << '.'<< dist%mod/10<<"\n";
    }
    return 0;
}
