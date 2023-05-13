#include <fstream>
#include <cmath>
using namespace std;
int x[30],y[30];
long int nr10(int v[30],long int nr,int incep)
{
    long int q,p,m;
    int i;
    m=0;
    p=1;
    q=nr;
    for (i=nr ; i>=incep ; i--)
    {
        m=m+v[q]*p;
        p=p*2;
        q--;
    }
    return m;
}
int main()
{
    ifstream cin("cepe.in");
    ofstream cout("cepe.out");
    int a,b,n1=0,n2=0,aux,i;
    cin>>a>>b;
    while(a)
    {
        n1++;
        if(a%2==1)
            x[n1]=1;
        a=a/2;
    }
    for (i= 1 ; i<= n1 / 2; ++i)
    {
        aux=x[i];
        x[i]=x[n1-i+1];
        x[n1-i+1]=aux;
    }
    while(b)
    {
        n2++;
        if(b%2==1)
            y[n2]=1;
        b/=2;
    }
    for (i= 1 ; i<= n2 / 2; ++i)
    {
        aux=y[i];
        y[i]=y[n2-i+1];
        y[n2-i+1]=aux;
    }
    int s,f;
    s=1;
    f=n2;
    while(x[s]==y[f])
        s++,f--;
    long c,d;
    long int q,p;
    p=1;
    q=n1;
    c=d=0;
    for (i=n1 ; i>=s ; i--)
    {
        c=c+x[q]*p;
        p=p*2;
        q--;
    }
    p=1;
    q=f;
    for (i=f ; i>=1 ; i--)
    {
        d=d+y[q]*p;
        p=p*2;
        q--;
    }
    cout<<c+d;
    return 0;
}
