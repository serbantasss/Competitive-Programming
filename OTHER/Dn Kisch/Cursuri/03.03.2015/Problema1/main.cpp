#include <iostream>

using namespace std;
long n,ok=1;
int main()
{
    cin>>n;
    if(n>1)
        ok=1;
    while(n>1)
    {
        if(n%2!=0)
        {ok=0;break;}
        n/=2;
    }
    if(ok)
        cout<<"DA";
    else
        cout<<"NU";
    return 0;
}
