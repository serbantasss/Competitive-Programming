#include <fstream>

using namespace std;
ifstream in("numerus.in");
ofstream out("numerus.out");
int i,l;
int main()
{
    long long int n,m,a,b;
    in>>n>>m;
    a=5*(n-1)+1;
    b=5*n;
    if(n%2==1)
    {
        for(i=a; i<=b; i++)
            out<<i<<" ";
        out<<b;
    }
    else
    {
        out<<b<<" ";
        for(i=b; i>=a; i--)
            out<<i<<" ";
    }
    out<<endl;
    l=m/5;
    if(m%5!=0)
        l++;
    out<<l<<endl;
    if(m%5==0)
        if(l%2==0) out<<'A'<<' '<<'B';
        else out<<'E'<<' '<<'F';
    else if(l%2==1)
    {
        char c='A'+m%5-1;
        out<<c;
    }
    else
    {
        char c='F'-m%5+1;
        out<<c;
    }
    out<<endl;
    return 0;
}

