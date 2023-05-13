#include <iostream>

using namespace std;

int main()
{
    int n, cn ,s, cif = 0,cnt,inv=0;
    cin >> n;
    cn=n;
    do
    {
        inv=inv*10+cn%10;
        cn /= 10;
    }while(cn);
    cn=n;
    cnt=0;
    s=0;
    do
    {
       cnt++;
       if(cnt%2==1 || cnt==1)
         s+=inv%10;
       inv/=10;
    }while(inv);
    cout<<s;
    return 0;
}
