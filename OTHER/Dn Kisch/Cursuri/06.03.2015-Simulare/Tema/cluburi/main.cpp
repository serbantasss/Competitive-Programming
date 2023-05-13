#include <fstream>
using namespace std;
const int LMAX=30000;
int v[LMAX+5];
ifstream in("cluburi.in");
ofstream out("cluburi.out");
int main()
{
   int n,copclb=1,nr;
   short int c=0;
   in>>n;
   nr=n;
   while(nr>1)
   {
       if(nr%2==1)
          {
            c++;
            v[c]=copclb;
            nr--;
            nr/=2;
            copclb=copclb*2;
        }
       else
       {
           nr/=2;
           copclb=copclb*2;
       }
   }
   v[c+1]=copclb;
   short int f=c+1;
   c+=nr;
   out<<c<<endl;
   for(int i=1;i<=f;++i)
     out<<v[i]<<" ";
   return 0;
}
