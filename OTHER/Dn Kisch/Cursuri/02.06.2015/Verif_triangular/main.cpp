#include <iostream>

using namespace std;

int main()
{
    int x,s,i;
    cin>>x;
    s=1;
    i=2;
    while(s<x)
      s=i*(i+1)/2,i++;
    if(s==x)
        cout<<"DA";
    else
        cout<<"NU";
    return 0;
}
