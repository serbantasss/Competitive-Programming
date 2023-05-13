#include <fstream>
using namespace std;
int main()
{
    ifstream cin("ograda.in");
    ofstream cout("ograda.out");
    long long int p,c,x,nr;
    cin>>x;
    cin>>c>>p;
    if(x==1)
    {
        cout<<(long long int)2*c-p/2<<" "<<(long long int)p/2-c;
        return 0;
    }
    nr=0;
    for(int i=1;i<=c;i+=2)
        if(c%i==0)
            nr++;
    cout<<(long long int)nr<<" ";
    nr=0;
    for(int i=2;i<=p;i+=2)
        if(p%i==0)
            nr++;
    cout<<(long long int)nr;
    return 0;
}
