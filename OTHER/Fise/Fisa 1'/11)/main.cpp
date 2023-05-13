#include <iostream>

using namespace std;
int pow(int a,int b)
{
    long long p=1;
    for(int i=1;i<=b;++i)
        p*=a;
    return p;
}
int main()
{
    int x,n,s=0,baza,exponent=1,i;bool ok=true;
    cin>>n;
    for(i=1;i<=n;++i)
    {
        cin>>x;
        if(ok==true)
            baza=x%10,ok=false;
        exponent=exponent*(x%4);
        exponent%=4;
        s=s+x%10;
        s%=10;
    }
    cout<<s<<" "<<pow(baza,exponent);
    return 0;
}
