#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    if(a<b)
            if(b<c && c<d && d<e)
                 cout<<"DA";
             else
                cout<<"NU";
         else
              if(b>c && c>d && d>e)
                  cout<<"DA";
               else
                   cout<<"NU";
    return 0;
}
