#include <iostream>

using namespace std;
int v[10];
int main()
{
    int a,b,nrc=0,nr=0;
    cin>>a>>b;
    do
    {
        v[++nrc]=a%10;
        a/=10;
    }while(a);
    do
    {
        for(int i=1;i<=nrc;++i)
            if(b%10==v[i])
               {nr++;break;}
        b/=10;
    }while(b);
    cout<<nr;
    return 0;
}
