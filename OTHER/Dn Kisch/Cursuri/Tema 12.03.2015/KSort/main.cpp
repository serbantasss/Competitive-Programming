#include <iostream>
#include <algorithm>
using namespace std;
int a[1001],b[1001];
int main()
{
    int n,k,i,x;
    cin>>n>>k;
    for(i=1;i<=n;++i)
    {
        cin>>x;
        if(i<=k)
            a[i]=x;
        else
            b[n-i]=x;
    }
    sort(a,a+k+1);
    sort(b,b+(n-k)+1);
    for(i=1;i<=k;++i)
        cout<<a[i]<<" ";
    for(i=n-k;i>=1;--i)
        cout<<b[i]<<" ";
    return 0;
}
