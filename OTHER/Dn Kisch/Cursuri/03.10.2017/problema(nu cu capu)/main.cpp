#include <iostream>
#include <set>
using namespace std;
set<int> N,M,reu;
int main()
{
    int n,m,i,j,x;
    cin>>n;
    for(i=1;i<=n;++i)
    {
        cin>>x;
        N.insert(x);
    }
    cin>>m;
    for(i=1;i<=m;++i)
    {
        cin>>x;
        M.insert(x);
    }
    ///INTERSECTIE
     set<int>::iterator it;
    for(it=N.begin();it!=N.end();it++)
        if(M.find(*it)!=M.end())
            {cout<<*it<<" ";
            reu.insert(*it);}
    cout<<endl;
    ///DIFERENTA N-M
    for(it=N.begin();it!=N.end();it++)
        if(M.find(*it)==M.end())
            {cout<<*it<<" ";
            reu.insert(*it);}
            cout<<endl;
    ///DIFERENTA M-N
    for(it=M.begin();it!=M.end();it++)
        if(N.find(*it)==N.end())
            {cout<<*it<<" ";
            reu.insert(*it);}
            cout<<endl;
    ///REUNIUNE
    for(it=reu.begin();it!=reu.end();it++)
        cout<<*it<<" ";
        cout<<endl;
    return 0;
}
