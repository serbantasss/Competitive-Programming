#include <fstream>
#include <climits>
using namespace std;
int v[20000];
char ABC[2000];
ifstream in("bloc.in");
ofstream out("bloc.out");
int n;
int main()
{
    /**Scrieti un program care determina un sir de apartamente consecutive pentru care diferenta dintre numarul de
    apartamente locuite de negri si numarul de apartamente locuite de albi sau indieni sa fie maxim.*/
    int n,i,s,smax,isc,p,u;
    in>>n;
    for(i=1; i<=n; ++i)
        {
            in>>ABC[i];
            if(ABC[i]=='A' || ABC[i]=='C')
                v[i]=-1;
            else
                v[i]=1;
        }
    s=smax=v[1];
    isc=p=u=1;
    for(i=2; i<=n; ++i)
    {
        if(s+v[i]>v[i])
            s+=v[i];
        else
        {
            s=v[i];
            isc=i;
        }
        if(smax<=s)
        {
            smax=s;
            if(p>isc)
              p=isc;
            if(i>u)
               u=i;
        }
    }
    out<<p<< " "<<u;
    return 0;
}
