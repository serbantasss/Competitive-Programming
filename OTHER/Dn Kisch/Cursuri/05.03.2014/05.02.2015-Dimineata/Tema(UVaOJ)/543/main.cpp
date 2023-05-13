#include <fstream>
using namespace std;
ifstream in("543.in");
ofstream out("543.out");
const int NMAX=1000000;
bool c[NMAX+5];
void ciur(int n)
{
    c[0]=c[1]=0;
    int lim,i,j;
    for(i=4;i<=n;i+=2)
        c[i]=1;
    for(i=3;i*i<=n;i+=2)
        if(c[i]==0)
          for(j=i*i;j<=n;j=j+2*i)
               c[j]=1;
}
int main()
{
    int n;
    ciur(1000000);
    while(n)
    {
    in>>n;
    if(n==0)
        break;
    int ok=0,a,b;
    for(int i=2;i<=n/2 ;i++)
        {
            a=i;
            b=n-i;
            if(c[a]==0 && c[b]==0)
              {
                  ok=1;
                  break;
              }
        }
    if(ok)
        out<<n<<" = "<<a<<" + "<<b<<endl;
    else
        out<<"Goldbach's conjecture is wrong.\n";
    }
    return 0;
}
