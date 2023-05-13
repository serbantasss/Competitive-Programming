#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
int p[101];
int main()
{
    int n,i;
    cin>>n;
    for(i=1;i<=n;++i)
        p[i]=n-i+1;
    int nr=1;
    while(next_permutation(p+1,p+n+1,greater<int>()))
    {
        for(i=1;i<=n;++i)
            cout<<p[i]<<" ";
        cout<<endl;
        nr++;
    }
    cout<<nr;
    return 0;
}
