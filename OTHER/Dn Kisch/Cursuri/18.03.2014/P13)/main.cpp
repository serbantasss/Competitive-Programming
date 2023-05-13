#include <iostream>

using namespace std;

int main()
{
    int x,e;
    cin>>x;
    e=0;
    if(x==0 || x==1 || x==2)
      e=2*x;
    if(x>=3)
       e=5*x;
    cout<<e;
    return 0;
}
