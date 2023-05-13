#include <iostream>

using namespace std;

int main()
{
    int n,k,i,f;
    long long int sol=0;
    cin>>n>>k;
    f=n-k+1;
    for(i=1;i<=f;++i)
    {
        sol=sol+i*(i+1)/2;
    }
    cout<<sol;
    return 0;
}
