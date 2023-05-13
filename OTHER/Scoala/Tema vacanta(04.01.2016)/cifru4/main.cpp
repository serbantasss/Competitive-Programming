#include <iostream>
#include <algorithm>
using namespace std;
int c[101],v[101],dif[10001];
int main()
{
    int n,cn,i,j,nrc=0,x=0;
    cin>>n;
    cn=n;
    do
    {
        nrc++;
        c[nrc]=cn%10;
        cn/=10;
    }
    while(cn);
    for(i=1; i<=nrc; ++i)
    {
        int nr=0;
        for(j=nrc; j>=nrc-i+1; --j)
            nr=nr*10+c[j];
        v[i]=nr;
        if(nr%nrc==0)
            x++;
    }
    int nr=1;
    for(i=1; i<nrc; ++i)
        for(j=i+1; j<=nrc; ++j)
            {dif[nr]=v[j]-v[i];nr++;}
    sort(dif+1,dif+nr);
    for(i=1; i<nr; ++i)
        if(dif[i]%nrc==0)
        {
            if(dif[i]==dif[i+1])
                while(dif[i]==dif[i+1])
                    i++;
            x++;
        }
    cout<<x;
    return 0;
}
