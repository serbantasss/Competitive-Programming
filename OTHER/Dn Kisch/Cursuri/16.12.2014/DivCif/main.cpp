#include <iostream>

using namespace std;

int main()
{
    int a,b,i,ci,nr=0,ok,c;
    cin>>a>>b;
    for(i=a; i<=b; ++i)
    {
        ci=i;
        ok=1;
        do
        {
            c=ci%10;
            if(c != 0 && i%c!=0)
              {
                ok=0;
                break;
              }
            ci/=10;
        }while(ci>0);
        if(ok)
            ++nr;
    }
    cout<<nr;
    return 0;
}
