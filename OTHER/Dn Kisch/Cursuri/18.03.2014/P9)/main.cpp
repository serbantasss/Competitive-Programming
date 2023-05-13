#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a<b &&b>c)
            if(b>d)
                 cout<<"DA";
             else
                cout<<"NU";
         else
            if(a<b && b<c)
                if(c>d)
                    cout<<"DA";
                else
                    cout<<"NU";
    return 0;
}
