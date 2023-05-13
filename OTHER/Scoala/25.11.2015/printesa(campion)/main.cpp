#include <fstream>

using namespace std;
int rude[11],pretendent[101];
int main()
{
    ifstream cin("printesa.in");
    ofstream cout("printesa.out");
    int k,h,p,i,L;
    bool prim,gasit;
    cin>>k>>h;
    for(i=1;i<=h;++i)
        cin>>rude[i];
    p=2;
    L=0;
    while(L<k)
    {
        prim=true;
        for (i=2;i*i<=p;++i)
            if (p % i==0 )
                prim=false;
        if (prim)
        {
            gasit=true;
            for(i=1;i<=h;++i)
                if (p==rude[i])
                    gasit=false;
            if (gasit)
            {
                L=L+1;
                pretendent[L]=p;
            }
        }
        p=p+1;
    }
    for(i=L;i>=1;--i)
        cout<<pretendent[i]<<' ';
    return 0;
}
