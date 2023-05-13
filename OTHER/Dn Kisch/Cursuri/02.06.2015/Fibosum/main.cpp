#include <iostream>

using namespace std;
int f[47];
int main()
{
    int n,i;
    cin>>n;
    f[1]=f[2]=1;
    for(i=3;i<=46;++i)
        f[i]=f[i-1]+f[i-2];
    while(n>0)
    {
        for(i=46;i>=1;--i)
            if(f[i]<=n)
        {
            cout<<f[i]<<" ";
            n-=f[i];
            break;
        }
    }
    return 0;
}
