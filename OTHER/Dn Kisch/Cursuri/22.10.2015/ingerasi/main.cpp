#include <fstream>

using namespace std;
int cmmdc(int a, int b)
{
    int t;
    while (b != 0)
    {
        t = b;
        b = a % b;
        a = t;
    }
    return a;
}
int v[32];
int main()
{   ifstream cin ("ingerasi.in");
    ofstream cout ("ingerasi.out");
    int n,x,c,m;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    c=v[1];
    for(int i=1;i<=n-1;i++)
    {
        m=cmmdc(v[i],v[i+1]);
        v[i+1]=m;
    }
    cout<<m;

    return 0;
}
