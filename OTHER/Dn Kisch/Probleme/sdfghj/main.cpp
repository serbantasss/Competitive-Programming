#include <iostream>

using namespace std;

int main()
{
    int n,i,v[15],ioni,j;
    cin>>n;
    for (i=1;i<=n;i++)
        cin>> v[i];
    for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++)
       {
        ioni=v[i];
        v[i]=v[j];
        v[j]=ioni;
       }
    for (i=1;i<=n;i++)
        cout<< v[i]<<" ";
    return 0;
}
