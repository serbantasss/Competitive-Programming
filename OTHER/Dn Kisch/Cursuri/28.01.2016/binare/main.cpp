#include <fstream>
#include <cmath>
using namespace std;

bool pbin(int x)
{
    do
    {
        if(x%10!=0)
            return 0;
        x/=10;
    }while(x>10);
    if(x==1)
        return 1;
}
int nrcif(int x)
{
    int nrc=0;
    do
    {
        nrc++;
        x/=10;
    }while(x);
    return nrc;
}
int main()
{
    ifstream cin("binare.in");
    ofstream cout("binare.out");
    int n,i,nr=0;
    cin>>n;
    nr=pow(2,nrcif(n));
    if(pbin(n))
        nr/=2;
    cout<<nr;
    return 0;
}
