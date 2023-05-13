#include <iostream>

using namespace std;
int a[31];
int main()
{
    int n,i,Mp=0,x,p;
    cin>>n>>p;
    for(i=1;i<=n;++i)
    {
      cin>>x;
      if(x%p==0)
            {
            Mp++;
            a[i]=1;
            }
    }
    if(M13==0)
        cout<<"NU EXISTA Mp.";
    else
    {
        cout<<M13<<" nr Mp\n Indicii acestora:\n";
        for(i=1;i<=n;++i)
            if(a[i]==1)
              cout<<i<<"\n";
    }
    return 0;
}
