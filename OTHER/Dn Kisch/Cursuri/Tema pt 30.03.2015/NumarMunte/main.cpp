#include <fstream>
#include <algorithm>
using namespace std;
ifstream in("pozitiex.in");
ofstream out("pozitiex.out");
int v[10001];
int main()
{
    int x,n,i;
    in>>x>>n;
    for(i=1;i<=n;++i)
        in>>v[i];
    sort(v+1,v+n+1);
    bool sw=true;
    for(i=1;i<=n;++i)
        if(v[i]==x)
    {
        out<<i;
        sw=false;
        break;
    }
    if(sw==true)
        out<<"NU EXISTA";
    return 0;
}
