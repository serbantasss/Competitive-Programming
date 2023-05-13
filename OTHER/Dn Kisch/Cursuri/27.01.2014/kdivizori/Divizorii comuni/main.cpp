#include <iostream>
using namespace std;
int cmmdc(int a,int b)
{
    int r;
    while(b)
    {
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}
int main()
{
    int a,b,i,cm;
    cin>>a>>b;
    cm=cmmdc(a,b);
    for(i=1;i<=cm;++i)
        if(a%i==0 && b%i==0)
          cout<<i<<" ";
    return 0;
}
