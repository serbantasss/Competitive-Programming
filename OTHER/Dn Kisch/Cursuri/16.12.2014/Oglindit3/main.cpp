#include <iostream>

using namespace std;

int main()
{
    int x,s=0,inv=0,c;
    cin>>x;
    do
    {
        c=x%10;
        s+=c;
        x/=10;
    }while(x>0);
    do
    {
        c=s%10;
        inv=inv*10+c;
        s/=10;
    }while(s>0);
    cout<<inv;
    return 0;
}
