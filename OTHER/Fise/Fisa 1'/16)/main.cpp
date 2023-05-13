#include <iostream>

using namespace std;

int main()
{
    int n,i,nrc=0;
    cin>>n;
    for(i=1;i<=n;++i)
    {
        int ci=i;
        do
        {
          nrc++;
          i=i/10;
        }while(i>0);
        i=ci;
    }
    cout<<nrc;
    return 0;
}
