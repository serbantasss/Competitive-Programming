#include <fstream>

using namespace std;

int main()
{
    ifstream in("mult.in");
    ofstream out("mult.out");
    int n,k,nu=1,r;
    in>>n>>k;
    r=k%n;
    while(r!=0 && nu<10000)
    {
        r=(r*10+k)%n;
        nu++;
    }
    if(r==0)
      out<<nu;
    else
        out<<0;
}
