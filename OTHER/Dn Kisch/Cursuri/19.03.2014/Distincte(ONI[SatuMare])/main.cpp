#include <cstdio>

using namespace std;

int v[15];
int main()
{
    freopen("distincte.in","r",stdin);
freopen("distincte.out","w",stdout);
    int n,nr=0,a=-1,b=-1,i,aux,st,dr;
    scanf("%d",&n);
    do
        nr++,v[nr]=n%10,n/=10;
    while(n);
    st=1;dr=nr;
    while(st<dr)
    {
        aux=v[st];
        v[st]=v[dr];
        v[dr]=aux;
        st++,dr--;
    }
    for(i=nr-1;i>=1 && v[i]>v[i+1];--i);
    int j=i+1;
    while(j<=nr && v[j]>v[i])
       j++;
    j--;

    aux=v[i];
    v[i]=v[j];
    v[j]=aux;
    st=i+1;dr=nr;
    while(st<dr)
    {
        aux=v[st];
        v[st]=v[dr];
        v[dr]=aux;
        st++,dr--;
    }
    for(i=1;i<=nr;++i)
        printf("%d",v[i]);
    return 0;
}
