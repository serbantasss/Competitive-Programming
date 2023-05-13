#include <iostream>

using namespace std;
bool primeIntreEle(int a,int b)
{
    int c;
    if(a==1 || b==1)
        return false;
    while (b)
    {
        c = a % b;
        a = b;
        b = c;
    }
    if(a==1)
      return true;
      else
        return false;
}
int main()
{
    int n,i;
    cin>>n;
    for(i=1;i<=n;++i)
        if(primeIntreEle(i,n)==true)
           cout<<i<<" ";
    return 0;
}
