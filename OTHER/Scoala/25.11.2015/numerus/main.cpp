#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream cin("numerus.in");
    ofstream cout("numerus.out");
    int i,l;
    long long int n,m,a,b;
    cin>>n>>m;
    a=5*(n-1)+1;
    b=5*n;
    if(n%2==1)
    {
        for(i=a; i<=b; i++)
            cout<<i<<" ";
        cout<<b;
    }
    else
    {
        cout<<b<<" ";
        for(i=b; i>=a; i--)
            cout<<i<<" ";
    }
    cout<<endl;
    l=m/5;
    if(m%5!=0)
        l++;
    cout<<l<<endl;
    if(m%5==0)
        if(l%2==0)
            cout<<'A'<<' '<<'B';
        else
            cout<<'E'<<' '<<'F';
    else
        if(l%2==1)
        {
            char c='A'+m%5-1;
            cout<<c;
        }
        else
        {
            char c='F'-m%5+1;
            cout<<c;
        }
    cout<<endl;
    return 0;
}

