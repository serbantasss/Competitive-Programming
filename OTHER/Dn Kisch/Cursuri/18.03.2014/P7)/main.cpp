#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a<b)
            if(b<c && c<d)
                 cout<<"DA";
             else
                cout<<"NU";
         else
              if(b>c && c>d)
                  cout<<"DA";
               else
                   cout<<"NU";
    return 0;
}
