#include <iostream>

using namespace std;

int main()
{
    int a,b,c,nr1,nr2,nr3;
    cin>>a>>b>>c;
    nr1=nr2=nr3=0;
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
    do
      {
       nr3++;
       c/=10;
      }while(c>0);
    if(nr1==nr2 && nr2==nr3)
          cout<<"DA";
    else
        cout<<"NU";
    return 0;
}
