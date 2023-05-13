#include <iostream>

using namespace std;
int v[1001];
int main()
{
    int n,i,x,max,min,imin,imax;
    cin>>n;
    for(i=1;i<=n;++i)
      cin>>v[i];
    max=min=v[1];
    imin=1;
    imax=1;
    for(i=1;i<=n;++i)
       {
           if(max<v[i])
              {imax=i;max=v[i];}
           if(min>v[i])
              {imin=i;min=v[i];}
       }
    cout<<imin<<" "<<imax;
    return 0;
}
