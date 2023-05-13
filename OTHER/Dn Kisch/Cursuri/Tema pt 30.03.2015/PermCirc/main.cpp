#include <iostream>

using namespace std;
int v[20];
int main()
{
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;++i)
        cin>>v[i];
    for(i=1;i<=n;++i)
    {
      for(j=i;j<=n;++j)
        cout<<v[j]<<" ";
      for(j=1;j<i;++j)
        cout<<v[j]<<" ";
      cout<<"\n";
    }
    return 0;
}
