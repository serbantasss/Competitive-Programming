#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a<b)
            if(b<c)
                 cout<<"DA";
             else
                cout<<"NU";
   else
       if(a>b)
           if(b>c)
              cout<<"DA";
           else
              cout<<"NU";
    return 0;
}
