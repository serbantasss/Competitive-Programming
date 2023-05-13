#include <fstream>
#include <cmath>
using namespace std;
int v[10005];
int main()
{
    ifstream cin("numere10.in");
    ofstream cout("numere10.out");
    int n,i,j,nr;
    cin>>n;
    for(i=1; i<=n; ++i)
        cin>>v[i];
    nr=0;
    for(i=1; i<=n; ++i)
    {
        int c=0,d,z;
        for(d=1; d*d<v[i]; ++d)
            if(v[i]%d==0)
                c+=2,z=d;
        if(d*d==v[i])
            c++;
        if(c==4)
        {
            if(z*z*z!=v[i])
                nr++;
        }
    }
    cout<<nr;
    return 0;
}
