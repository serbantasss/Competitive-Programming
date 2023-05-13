#include <fstream>

using namespace std;
int a[1001];
int main()
{
    ifstream in("nrpomi.in");
    ofstream out("nrpomi.out");
    int n,i,nr=1,t;
    in>>n>>t;
    for(i=1; i<=n; ++i)
        in>>a[i];
    nr=1;
    a[n+1]=a[n-1];
    for(i=2; i<=n; i+=2)
        if(a[i-1]==a[i+1])
            nr=(nr*(t-1))%1234;
        else
            nr=(nr*(t-2))%1234;
    out<<nr;
    return 0;
}
