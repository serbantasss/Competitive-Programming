#include <iostream>

using namespace std;
int i_prim(int n)
{
    int a,b,i;
    for(i=n; ; ++i)
    {
        bool ok=true;
        if(i<2)
            ok=false;
        else if(i%2==0 && i>2)
            ok=false;
        else
            for(int d=3; d*d<=i; ++d)
                if(i%d==0)
                {
                    ok=false;
                    break;
                }
        if(ok==true)
        {
            a=i;
            break;
        }
    }
    for(i=n; ; --i)
    {
        bool ok=true;
        if(i<2)
            ok=false;
        else if(i%2==0 && i>2)
            ok=false;
        else
            for(int d=3; d*d<=i; ++d)
                if(i%d==0)
                {
                    ok=false;
                    break;
                }
        if(ok==true)
        {
            b=i;
            break;
        }
    }
    return a-b;
}
int main()
{
    int n;
    cin>>n;
    cout<<i_prim(n);
    return 0;
}
