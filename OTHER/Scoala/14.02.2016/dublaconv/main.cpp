#include <fstream>
#include <cmath>
using namespace std;
long long int n,s;
int v[100];
int main()
{
    ifstream cin("dconv.in");
    ofstream cout("dconv.out");
    cin>>n;
    int i,j;
    for(i=1;n;i++)
    {
        v[i]=n%2;
        n/=2;
    }
    long long int p=1;
    for(j=1;j<i;++j)
    {
        s=s+v[j]*p;
        p*=10;
        v[j]=0;
    }
    for(i=1;s;i++)
    {
        v[i]=s%2;
        s/=2;
    }
    for(j=i-1;j>=1;--j)
        cout<<v[j];
    return 0;
}
