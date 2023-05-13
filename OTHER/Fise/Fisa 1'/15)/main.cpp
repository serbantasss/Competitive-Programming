#include <iostream>

using namespace std;
int f[10];
int main()
{
    int n,x,i,min=200000000,nrmax=0;
    cin>>n;
    for(i=1;i<=n;++i)
    {
        cin>>x;
        int nr=0,cx=x;
        do
        {
           if(f[x%10]==0)
            nr++,f[x%10]=1;
           x/=10;
        }while(x);
        if(nr>nrmax)
            if(cx<min)
               min=cx,nrmax=nr;
           else
            nrmax=nr;
       for(i=0;i<=9;++i)
          f[i]=0;
    }
    cout<<min;
    return 0;
}
