#include <iostream>
#include <algorithm>
using namespace std;
int euclid(int a, int b)
{
    int c;
    while (b)
    {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}
int v[1001],b[1001];
    int main()
    {
        int n,u,k=0,i;
        cin>>n;
        for(i=1; i<=n; ++i)
            cin>>v[i];
        u=v[n];
        for(i=1;i<=n;++i)
            if(euclid(v[i],u)==1)
            {
                k++;
                b[k]=v[i];
            }
        sort(b+1,b+k+1);
        for(i=k;i>=1;--i)
            cout<<b[i]<<" ";
        return 0;
    }
