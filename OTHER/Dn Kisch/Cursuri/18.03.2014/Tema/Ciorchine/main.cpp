#include <iostream>

using namespace std;

int main()
{
    int n,m,i,nr,x,y,dif;
    cin>>n>>m;
    nr=n-m+1;
    x=1=y;
    dif=0;
    while(nr>=x*y/2)
      {
      x++;
      y++;
      }
    if(nr==x*y/2)
      dif=0;
    if(nr>x*y/2)
       dif=(x+1)*(y+1)/2-x*y/2;

    return 0;
}
