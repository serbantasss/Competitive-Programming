#include <iostream>

using namespace std;

int main()
{
    int n,p,s=0,d1,d2,l,stare1,stare2;
    cin>>n>>p;l=(2*n+1)*p;
    d1=0;
    d2=l;
    stare1=stare2=0;
    while(d1<d2)
    {
        s++;
        if(stare1==0)
        {
            d1+=2;
            if(d1/p%2==1 || d1%p==0)
                stare1=1;
        }
        else stare1=0;
        if(stare2==0)
        {
            d2-=3;
            if(!(d2/p%2==1 || d2%p==0))
                stare2=1;
        }
        else
            if(stare2==1)
               stare2=2;
              else
                stare2=0;
    }
    cout<<s;
    return 0;
}
