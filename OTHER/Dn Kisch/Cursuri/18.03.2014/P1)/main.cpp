#include <iostream>

using namespace std;

int main()
{
    int a,b,nr1,nr2;
    cin>>a>>b;
    nr1=nr2=0;
    do
      {
       nr1++;
       a/=10;
      }while(a>0);
    do
      {
      nr2++;
      b/=10;
      }while(b>0);
    if(nr1==nr2)
       cout<<"DA";
    else
        cout<<"NU";
    return 0;
}
