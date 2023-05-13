#include <fstream>
#include <cmath>
using namespace std;
int v[501],div[501];
bool liber(int x)
{
    for(int d=2;d*d<=x;++d)
        if(x%(d*d)==0)
            return 0;
    return 1;
}
int nrdiv(int x)
{
    int d,c=0;
    for(d=1; d*d<x; ++d)
        if(x%d==0)
            c+=2;
    if(d*d==x)
        c++;
    return c;
}
int main()
{
    ifstream cin("div.in");
    ofstream cout("div.out");
    int n,i,divmax=0,max=0,p;
    bool ok=false;
    cin>>p;
    cin>>n;
    if(p==1)
        {
        for(i=1;i<=n;++i)
            {
                cin>>v[i];
                if(sqrt((double)v[i])==(int)sqrt((double)v[i]))
                    cout<<v[i]<<" ",ok=true;
            }
        if(ok==false)
            cout<<0;
        return 0;
        }
    if(p==2)
    {
        for(i=1;i<=n;++i)
            {
                cin>>v[i];
                if(liber(v[i]))
                    cout<<v[i]<<" ",ok=true;
            }
        if(ok==false)
            cout<<0;
        return 0;
    }
    if(p==3)
    {
        for(i=1;i<=n;++i)
            {
                cin>>v[i];
                div[i]=nrdiv(v[i]);
                if(div[i]>divmax)
                    divmax=div[i],max=v[i];
            }
        for(i=1;i<=n;++i)
            if(div[i]==divmax)
                if(v[i]>max)
                    max=v[i];
        cout<<max;
        return 0;
    }
    return 0;
}
