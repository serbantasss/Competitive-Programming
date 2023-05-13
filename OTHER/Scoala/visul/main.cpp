#include <iostream>
using namespace std;
long int formula=0;
short int i,n,nr,nrcif,bun,j,prim,m,pus[100];
int main()
{
    cin>>n;
    formula=n;
    if(n==1 || n==10)
        cout<<"Nu exista";
    else
    {
        nrcif=n-1;
        do
        {
            bun=0,nr=formula%10;
            i=1;
            while(i<10 && bun==0)
            {
                nr=nr*10+i;
                prim=1;
                if(nr<=1)
                    prim=0;
                else
                    for(j=2; j*j<=nr; ++j)
                        if(nr%j==0)
                            prim=0;
                if(prim==1 && pus[nr]==0)
                {
                    pus[nr]=1;
                    formula=formula*10+i;
                    bun=1;
                    nrcif=nrcif-1;
                }
                else
                    nr%=10;
                i+=2;
            }
        }
        while(nrcif>0);
        cout<<formula;
    }
    return 0;
}
