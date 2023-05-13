#include <iostream>

using namespace std;
float nreal(int x,int y)
{
    int cp=y,p=1;
    do
    {
        p*=10;
        cp/=10;
    }while(cp);
    return (double)(x+((double)y/p));
}
int main()
{
    int x=12,y=543;
    cout<<nreal(x,y);
    return 0;
}
