#include <iostream>
#include <cmath>
using namespace std;
const int NMAX=100000000;
bool c[NMAX+5];
void ciur(int n)
{
    c[0]=c[1]=0;
    int lim,i,j;
    for(i=4;i<=n;i+=2)
        c[i]=1;
    lim=(int)sqrt((double)n);
    for(i=3;i<=lim;i+=2)
        if(c[i]==0)
          for(j=i*2;j<=n;j=j+2*i)
               c[j]=1;
}
int pow(int a,int b)
{
    long long int p=1;
    for(int i=1;i<=b;++i)
        p*=a;
    return p;
}
int intors(int n)
{
    int inv=0;
    do
    {
        inv=inv*10+n%10;
        n/=10;
    }while(n);
    return inv;
}
int main()
{
    int n;
    cin>>n;
    ciur(n);
    for(long long int i=pow(10,n-1);i<=pow(10,n);++i)
    {
        int inv=intors(i);
        if(c[i]==false && c[inv]==0)
            cout<<"("<<i<<","<<inv<<") ";
    }
    return 0;
}
