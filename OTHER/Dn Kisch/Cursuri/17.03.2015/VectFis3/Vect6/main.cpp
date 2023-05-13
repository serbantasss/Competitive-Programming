#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,i,pp=0,x;
    cin>>n;
    for(i=1;i<=n;++i)
    {
      cin>>x;
      if(sqrt((double)x)==(int)sqrt((double)x))
            pp++;
    }
    if(pp==0)
        cout<<"NU EXISTA PP.";
    else
    {
        cout<<pp<<" patrate perfecte";
    }
    return 0;
}
