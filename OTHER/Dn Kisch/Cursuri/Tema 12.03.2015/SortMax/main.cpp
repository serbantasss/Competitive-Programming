#include <iostream>
#include <algorithm>
using namespace std;
int a[1001],b[1001],v[1001];
int main()
{
    int n,poz,i,max=0;
    cin>>n;
    for(i=1;i<=n;++i)
        {cin>>v[i];
        if(v[i]>max)
            max=v[i],poz=i;
        }
    for(i=1;i<=n;++i)
    {
        if(i<=poz)
            a[i]=v[i];
        else
            b[n-i]=v[i];
    }
    sort(a,a+poz+1);
    sort(b,b+(n-poz)+1);
    for(i=1;i<=poz;++i)
        cout<<a[i]<<" ";
    for(i=n-poz;i>=1;--i)
        cout<<b[i]<<" ";
    return 0;
}
