#include <fstream>
using namespace std;
int x[11];
int main()
{
    ifstream in("prodmax.in");
    ofstream out("prodmax.out");
    long int n,nr1,nr2,nr1max,nr2max;
    int k,i,j,aux;
    in>>n;
    k=0;
    do
    {
        ++k;
        x[k]=n%10;
        n/=10;
    }
    while(n);
    for(i=1; i<=k/2; ++i)
    {
        aux=x[i];
        x[i]=x[k-i+1];
        x[k-i+1]=aux;
    }
    nr1max=nr2max=0;
    for(i=1; i<k; ++i)
    {
        nr1=0;
        for(j=1; j<=i; ++j)
            nr1=nr1*10+x[j];
        nr2=0;
        for(j=i+1; j<=k; ++j)
            nr2=nr2*10+x[j];
        if (nr1*nr2>nr1max*nr2max)
        {
            nr1max=nr1;
            nr2max=nr2;
        }
        else
            if(nr1*nr2==nr1max*nr2max && nr1>nr1max)
            {
            nr1max=nr1;
            nr2max=nr2;
            }
    }
    out<<nr1max*nr2max<<"\n"<<nr1max<<"\n"<<nr2max;
    return 0;
}
