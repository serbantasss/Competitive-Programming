#include <fstream>
using namespace std;
const int NMAX=2000000;
int q[NMAX+5],cif[NMAX+5],t[NMAX+5],sol[1000];
bool viz[NMAX+5];
int cmmdc(int a,int b)
{
    int r;
    while(b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}
int main ()
{
    ifstream cin("multiplu.in");
    ofstream cout("multiplu.out");
    int a,b,i,p,u,cmmmc,r,soln=0,ok=1;
    int temp;
    cin>>a>>b;
    cmmmc=a*b/cmmdc(a,b);
    q[1]=viz[1]=cif[1]=1;
    u=1;
    p=0;
    ok=0;
    while(p<=u && !ok)
    {
        temp=q[++p];
        for(i=0; i<=1; i++)
        {
            r=(temp*10+i)%cmmmc;
            if (viz[r]==0)
            {
                viz[r]=1;
                q[++u]=r;
                cif[u]=i;
                t[u]=p;
                if (r==0)
                {
                    while(1)
                    {
                        if(u!=0)
                           sol[++soln]=cif[u];
                        if (u==0)
                            {
                                ok=1;
                                break;
                            }
                        u=t[u];
                    }
                }
            }
        }
    }
    for(i=soln;i>=1;--i)
        cout<<sol[i];
    return 0;
}
