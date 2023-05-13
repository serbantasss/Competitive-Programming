#include <fstream>
#include <climits>
using namespace std;
int v[100000000];
ifstream in("secv.in");
ofstream out("secv.out");
int n;
void citire(int n)
{
    int i;
    for(i=1; i<=n; ++i)
        in>>v[i];
}
int main()
{
    int n,i,s,smax,isc,p,u;
    in>>n;
    citire(n);
    s=smax=v[1];
    isc=p=u=1;
    for(i=2; i<=n; ++i)
    {
        if(s+v[i]>v[i])
            s+=v[i];
        else
        {
            s=v[i];
            isc=i;
        }
        if(smax<=s)
        {
            smax=s;
            p=isc;
            u=i;
        }
    }
    out<<smax<<"\n";
    for(i=p;i<=u;++i)
        out<<v[i]<<" ";
    return 0;
}
