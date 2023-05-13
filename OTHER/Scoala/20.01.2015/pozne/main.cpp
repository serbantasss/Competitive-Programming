#include <fstream>
using namespace std;
int v[1001],cred[1001],c;
bool verifprim(int x)
{
    if(x < 2)
        return 0;
    if(x % 2 == 0 && x > 2)
        return 0;
    for(int  d = 3 ; d*d <= x ; d += 2)
        if(x % d == 0)
            return 0;
    return 1;
}
bool verifcred(int x)
{
    int nr=0;
    do
    {
        nr=nr*10+x%10;
        x/=10;
    }
    while(x);
    return verifprim(nr);
}
bool cunosc(int x)
{
    do
    {
        if(x%10==c)
            return 1;
        x/=10;
    }
    while(x);
    return 0;
}
int main()
{
    ifstream cin("pozne.in");
    ofstream cout("pozne.out");
    int n,s,i,nrcred=0,p,sum=0;
    cin>>p;
    cin>>n>>s>>c;
    for(i=1; i<=n; ++i)
    {
        cin>>v[i];
        if(verifcred(v[i]))
        {
            nrcred++;
            cred[nrcred]=v[i];
        }
    }
    if(p==1)
    {
        for(i=1; i<=n; ++i)
        {
            if(cunosc(v[i]))
                cout<<v[i]<<" ";
        }
        return 0;
    }
    for(i=1; i<=nrcred; ++i)
        if(cunosc(cred[i]))
            sum-=s;
        else
            sum+=s;
    cout<<nrcred<<" ";
    if(sum>0)
        cout<<1;
    else
        if(sum<0)
            cout<<-1;
        else
            cout<<0;
    return 0;
}
