#include <iostream>

using namespace std;
int a[31];
int main()
{
    int n,i,M13=0,x;
    cin>>n;
    for(i=1;i<=n;++i)
    {
      cin>>x;
      if(x%13==0)
            {
            M13++;
            a[i]=1;
            }
    }
    if(M13==0)
        cout<<"NU EXISTA M13.";
    else
    {
        cout<<M13<<" nr M13\n Indicii acestora:\n";
        for(i=1;i<=n;++i)
            if(a[i]==1)
              cout<<i<<"\n";
    }
    return 0;
}
