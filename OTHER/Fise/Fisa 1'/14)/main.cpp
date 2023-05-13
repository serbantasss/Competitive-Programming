#include <iostream>

using namespace std;

int main()
{
    int n,v[10],nrc=0,j,i;
    cin>>n;
    do
    {
        v[++nrc]=n%10;
        n/=10;
    }while(n);
    for(i=1;i<=nrc;++i)
    {
        for(j=nrc;j>=i;--j)
            cout<<v[j];
        cout<<" ";
    }
    return 0;
}
