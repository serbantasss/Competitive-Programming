#include <fstream>
using namespace std;
ifstream in("11466.in");
ofstream out("11466.out");
int desc(int n)
{
  int d,e,last=0;
  d=2;
  while(n>1 && d*d<=n)
  {
      e=0;
      while(n%d==0)
      {
          e++;
          n/=d;
      }
      if(e>0)
        last=d;
     d++;
  }
  if(n>1)
    last=n;
return last;
}
int main()
{
    int n;
    while(n)
    {
    in>>n;
    if(n==0)
        break;
    bool prim;
    if(n<2)
        prim=false;
    if(n%2==0 && n>2)
        prim=false;
    for(int d=3;d*d<=n;++d)
        if(n%d==0)
          {prim=false;break;}
    if(prim==true)
        out<<-1<<endl;
    else
       out<<desc(n)<<endl;
    }
    return 0;
}
