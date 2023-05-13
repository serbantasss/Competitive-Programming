#include <fstream>

using namespace std;
int v[1001];
int fsum(int n)
{
    int a=1,b=1,k=2,c,s=0;
    if(n==1)
      return 1;
    else
      if(n==2)
        return 2;
      else
        {
        s=2;
        while(k<n)
         {
          c=a+b;
          a=b;
          b=c;
          s+=c;
          k++;
         }
         return s;
       }
}
int main()
{
    fstream in("efort.in");
    fstream out("efort.out");
    int n,k,i,j,d,efort=0;
    in>>n>>k;
    for(i=1;i<=n;++i)
        in>>v[i];
    d=0;
    for(i=1;i<=n;++i)
    {
        if(d<k)
            d+=v[i];
        else
        {
            efort=efort+(k+fsum(d-k));
            d=0;
        }
    }
    if(d<k)
        d+=v[i];
    else
    {
        efort=efort+(k+fsum(d-k));
        d=0;
    }
    out<<efort;
    return 0;
}
