#include <fstream>

using namespace std;
int v[55];
int euclid(int a,int b)
{
    int r;
    r=a%b;
    while(r)
    {
    a=b;
    b=r;
    r=a%b;
    }
    return b;
}
int main()
{
    ifstream cin("cozonaci.in");
    ofstream cout("cozonaci.out");
    int n,i,f,r,s=0,c;
    cin>>n;
    for(i=1;i<=n;++i)
    {
        cin>>f>>r;
        v[i]=f-r;
        s+=v[i];
    }
    cout<<s<<endl;
    c=euclid(v[1],v[2]);
    for(i=3;i<=n;++i)
        c=euclid(c,v[i]);
    cout<<c;
    return 0;
}
