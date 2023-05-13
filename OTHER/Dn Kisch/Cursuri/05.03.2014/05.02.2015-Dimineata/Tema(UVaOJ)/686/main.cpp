#include <iostream>
#include <cmath>
using namespace std;
const int NMAX=1000000;
bool c[NMAX+5];
void ciur(int n)
{
    c[0]=c[1]=1;
    int lim,i,j;
    for(i=4;i<=n;i+=2)
        c[i]=1;
    lim=(int)sqrt((double)n);
    for(i=3;i<=lim;i+=2)
        if(c[i]==0)
          for(j=i*i;j<=n;j=j+2*i)
               c[j]=1;
}
int main()
{
    int i,n=1;
    ciur(100000);
    while(n!=0)
    {
        cin>>n;
        if(n==0)
            break;
        int nr=0;
        for(i=1;i<=n/2;++i)
            if(c[i]==0)
        {
            int x=n-i;
            if(c[x]==0)
                nr++;
        }
        cout<<nr<<"\n";
    }
    return 0;
}
