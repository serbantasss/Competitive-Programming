#include <iostream>

using namespace std;
int multipli(int a,int b,int c)
{
    int d,nr=0,k=1;
    for(d=a;d<=b;d=d+k)
        if(d%c==0)
          ++nr;
    return nr;
}
int main()
{
    cout<<multipli(10,27,5);
    return 0;
}
