#include <iostream>
#include <algorithm>
using namespace std;
int v[1001];
int main()
{
    int n,i;
    cin>>n;
    for(i=1;i<=n;++i)
        cin>>v[i];
    sort(v+1,v+n+1);
    for(i=1;i<=n;++i)
       cout<<v[i]<<" ";
    return 0;
}
