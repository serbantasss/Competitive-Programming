#include <iostream>

using namespace std;

int main()
{
    int n,nr,i,k;
    cin>>n>>k;
    nr=0;
    for(i=k;i<=n;i+=k)
       {
        nr++;
        k++;
       }
    cout<<nr;
    return 0;
}
