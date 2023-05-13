#include <fstream>
#include <cmath>

using namespace std;
bool rau(int n)
{
    if(n % 10 == 2 || n % 10 == 4 || n % 10 == 5 || n % 10 == 7)
        return 0;
    return 1;
}
int v[11],s[11];
int main()
{
    ifstream cin("goe.in");
    ofstream cout("goe.out");
    int n,p,k,nrn,i,aux,nrc,d;
    bool ok;
    cin>>k>>p>>n;
    nrn=0;
    for(i=1; i<=k; i++)
    {
        aux=i-1;
        ok=1;
        while(aux>0)
        {
            if (aux % 10 == 2 || aux % 10 == 4 || aux % 10 == 5 || aux % 10 == 7)
                ok=0;
            aux/=10;
        }
        if(ok)
            nrn=nrn+5;
    }
    cout<<nrn<<'\n';
    nrc=1;
    d=3;
    while(p>d)
    {
        p=p-d;
        nrc++;
        if(nrc%2)
            d=d*4;
    }
    v[1]=1;
    v[nrc]=1;
    d=d/3;
    p--;
    for(i=2; i<nrc; i++)
        v[i]=0;
    i=1;
    while(d>0)
    {
        v[i]=v[nrc-i+1]=v[i]+p/d;
        p=p%d;
        d/=4;
        i++;
    }
    for(i=1; i<=nrc; i++)
    {
        if(v[i]==2)
            v[i]=3;
        else
            if(v[i]==3)
                v[i]=8;
        cout<<v[i];
    }
    cout<<"\n";
    nrc=log10((double)n)+1;
    i=nrc;
    while(n>0)
    {
        s[i]=n%10;
        n=n/10;
        i--;
    }
    i=1;
    if(s[1]==1)
    {
        i++;
        while(i<=nrc && s[i]==0)
            i++;
    }
    if(i==nrc+1)
    {
        for(int j=1; j<=nrc; j++)
            cout<<'9';
        cout<<'\n';
    }
    else
    {
        cout<<'9';
        if(s[i]>1 && i<nrc && s[i+1]<6 || s[i]==1 && s[i+1]<6 || s[i]!=9)
        {
            s[i]--;
            if(s[i]==2 || s[i]==4 || s[i]==5 || s[i]==7)
                s[i]--;
            if(s[i]==4)
                s[i]=3;
        }
        i++;
        for(; i<=nrc; i++)
            s[i]=9;
        for(i=nrc; i>=1; i--)
        {
            if(s[i]==6)
                s[i]=9;
            cout<<s[i];
        }
        cout<<'\n';
    }
    return 0;
}
