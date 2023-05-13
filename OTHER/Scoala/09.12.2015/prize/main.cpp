#include <fstream>
#include <algorithm>
using namespace std;
int v[1005];
long long int s;
int main()
{
    fstream cin("prize.in");
    fstream cout("prize.out");
    int n,i;
    cin>>n;
    for(i=1;i<=n;++i)
        cin>>v[i];
    sort(v+1,v+n+1);
    for(i=n;i>=2;--i)
        s=s+v[i]-1;
    s+=v[1];
    cout<<s;
    return 0;
}
