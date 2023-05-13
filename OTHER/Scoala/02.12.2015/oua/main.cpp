#include <fstream>

using namespace std;
int t[51][51],L[101],C[101],D[101];
int main()
{
    ifstream in("oua.in");
    ofstream out("oua.out");
    int l,n,p,i;
    in>>l>>p;
    for(i=1;i<=p;++i)
    {
        int x,y,v;
        in>>x>>y>>v;
        t[x][y]=v;
    }
    in>>n;
    for(i=1;i<=n;++i)
    {
        int x,y;
        in>>x>>y;
        L[i]=x;
        C[i]=y;
        if(y==1)

    }
    return 0;
}
