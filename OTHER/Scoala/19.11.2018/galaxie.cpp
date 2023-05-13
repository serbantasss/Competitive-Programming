#include <fstream>
#include <cstdlib>
#include <cmath>
using namespace std;
struct intt
{
    int n,pa,im;
    bool yon;
};
intt v[2005];
int cif[15];
int main()
{
    ifstream in("1.in");
    ofstream out("1.out");
    int n,i,j,ki,kp,x,nc,cx,ok=0,first=-1,last=-1;
    in>>n;
    for(i=1; i<=n; ++i)
    {
        in>>x;
        v[i].n=x;
        cx=x;
        nc=0;
        do
        {
            cif[++nc]=x%10;
            x/=10;
        }
        while(x);
        ki=kp=1;
        for(j=1; j<=nc; ++j)
            if(cif[j]%2==0)
            {
                v[i].pa+=cif[j]*kp;
                kp*=10;
            }
            else
            {
                v[i].im+=cif[j]*ki;
                ki*=10;
            }
        x=cx;
        cx=(int)sqrt((double)cx);
        if(x==cx*(cx+1))
            v[i].yon=1;
        if(v[i].yon==1)
        {

            if(ok==0)
            {
                ok=1;
                first=last=i;
            }
            else
                last=i;
        }
    }
    if(first==-1)
    {
        out<<0;
        return 0;
    }
    if(first==last)
    {
        out<<abs(v[first].pa-v[first].im);
        return 0;
    }
    ki=kp=0;
    cx=0;
    ok=0;///0-iau 1-nu iau
    for(i=first; i<=last; ++i)
        if(v[i].yon==1)
        {
            if(ok)
                ok=0;
            else
                ok=1;
            cx+=abs(v[i].pa-v[i].im);
        }
        else if(ok==1)
            kp+=abs(v[i].pa-v[i].im);
        else
            ki+=abs(v[i].pa-v[i].im);
    if(v[first].n<=v[last].n)
        out<<kp+cx;
    else
        out<<ki+cx;
    return 0;
}
