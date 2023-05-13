#include <fstream>

using namespace std;

int main()
{
    ifstream cin("fit.in");
    ofstream cout("fit.out");
    int n,t,i,total;
    cin>>n>>t;
    total=n*(n+1)/2+n*(n-1)/2;
    if(t>=total)
    {
        cout<<1;
        return 0;
    }
    if(t<(n+1)*n/2)
    {
        cout<<-1;
        return 0;
    }

    return 0;
}
