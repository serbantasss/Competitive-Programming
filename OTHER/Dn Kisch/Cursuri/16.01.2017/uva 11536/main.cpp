#include <iostream>
#include <cstring>
using namespace std;
int v[1000001];
int main()
{
    int n,i,st,dr,s,sc,lmin;
    while(cin>>n>>s)
    {
        lmin=n+1;
        for(i=1; i<=n; ++i)
            cin>>v[i];
        sc=0;
        for(st=dr=1; dr<=n; ++dr)
        {
            sc+=v[dr];
                while(st<=dr && sc>=s)
                {
                    if(dr-st+1<lmin)
                        lmin=dr-st+1;
                    sc-=v[st];
                    st++;
                }

        }
        if(lmin<n+1)
            cout<<lmin<<endl;
            else
                cout<<0<<endl;
    }
    return 0;
}
