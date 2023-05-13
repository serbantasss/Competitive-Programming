#include <iostream>

using namespace std;
int v[32];
int main()
{
    int p=1,n,k=2,nr=0,aux,i;
    cin>>n;
    while(n>0)
    {
      int r;
      r=n&1;
      n=n>>1;
      v[++nr]=r;
    }
    int st,dr;
    st=1;
    dr=nr;
    while(st<dr)
    {
        aux=v[st];
        v[st]=v[dr];
        v[dr]=aux;
        st++,dr--;
    }
    aux=v[1]*p;p=p<<1;
    for(i=nr;i>1;--i)
    {
      aux=aux+v[i]*p;
      p=p<<1;
    }
    cout<<aux;
    return 0;
}
