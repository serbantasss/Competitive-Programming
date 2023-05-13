#include <iostream>

using namespace std;
bool VerifBaza2(int a)
{
    long long int p=0,pit=1;
    while(a)
    {
        if(a%2==1)
            p=p+pit;
        pit*=10;
        a/=2;
    }
    int nrz=0,nru=0;
    do
    {
        if(p%10==0)
            nrz++;
        else
            nru++;
        p/=10;
    }while(p);
    return nrz==nru;
}
int main()
{
    int n,i;
    cin>>n;
    for(i=1;i<=n;++i)
        if(VerifBaza2(i))
           cout<<i<<" ";
    return 0;
}
