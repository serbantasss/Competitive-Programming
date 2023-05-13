#include <iostream>

using namespace std;

int main()
{
    int nrz,nrp,nrn,n,i,x;
    cin>>n;
    nrz=nrp=nrn=0;
    for(i=1;i<=n;++i)
    {
        cin>>x;
        if(x==0)
            nrz++;
        if(x>0)
            nrp++;
        if(x<0)
            nrn++;
    }
    cout<<nrz<<" zerouri "<<nrp<<" numere pozitive "<<nrn<<" numere negative\n";
    return 0;
}
