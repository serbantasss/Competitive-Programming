#include <fstream>

using namespace std;
int f[5005];
int main()
{
    int n,i,poz,aprinse,op,prec;
    ifstream in("felinare.in");
    ofstream out("felinare.out");
    in>>n;
    for(i=1; i<=n; ++i)
        f[i]=1;
    op=1;
    f[0]=0;
    aprinse=n-1;
    poz=0;
    while(aprinse<n)
    {
        poz=(poz+1)%n;
        prec=poz-1;
        if(prec==-1)
            prec=n-1;
        if(f[prec]==1)
        {
            if(f[poz]==1)
            {
                f[poz]=0;
                aprinse--;
            }
            else
            {
                f[poz]=1;
                aprinse++;
            }
        }
        op++;
    }
    out<<op;
    return 0;
}
