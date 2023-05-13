#include <iostream>

using namespace std;
int v[12];
int main()
{
    int n,i,x,nrc=0,p;
    bool ok=true;
    cin>>n>>p;x=n;
    do
    {
        v[++nrc]=n%10;
        n/=10;
    }while(n);
    n=x;
    for(i=nrc;i>=1;--i)
       if(v[i]<p)
         {
           for(int j=nrc+1;j>i+1;--j)
             v[j]=v[j-1];
        v[i+1]=p;
        ok=false;
        break;
         }
    nrc++;
    if(ok)
       v[nrc]=p;
    for(i=nrc;i>=1;--i)
       cout<<v[i];
    return 0;
}
