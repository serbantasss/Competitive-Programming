#include <fstream>
using namespace std;
int main()
{
    ifstream in("1.in");
    ofstream out("1.out");
    int n,m,k,i,cn;
    in>>n>>m;
    k=1;
    cn=n;
    while(k)
    {
        if(cn+m>=n)
            cn=n;
        else
            cn+=m;
        cn-=k;
        if(cn<=0)
        {
            out<<k;
            return 0;
        }
        k++;
    }
    return 0;
}
