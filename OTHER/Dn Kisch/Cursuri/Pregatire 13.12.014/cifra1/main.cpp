#include <iostream>

using namespace std;

int main()
{
    int n,cn,nr=0,c,cp,ok=0,p=1;
    cin>>n;
    cn=n;
    do
    {
        c=cn%10;
        if(cp>c)
            ok=1;
        else
             {nr=nr+p*c;
               p*=10;}
        cp=c;
        cn/=10;
    }
    while(cn>0);
    if(ok)
        cout<<nr;
    else
       cout<<n/10;
    return 0;
}
