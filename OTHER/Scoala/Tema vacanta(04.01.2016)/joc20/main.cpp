#include <fstream>

using namespace std;
int v[1001];
int main()
{
    ifstream cin ("joc20.in" );
    ofstream cout("joc20.out");
    int n,i,s,sGuta=0,sMocanu=0,x;
    cin>>n;
    for(int i=1;i<=n;++i)
        cin>>v[i];
    int st,dr;
    dr=1;
    st=n;
    for(int i=1;i<=n;++i)
    {
        cin>>x;
        s=0;
        if(x==1)
            s=s+v[dr],dr++;
        else
            s=s+v[st],st--;
        if(i%2==1)///Rand Guta
        {
            sGuta+=s;
        }
        else///Rand Moncanu
        {
            sMocanu+=s;
        }
    }
    if(sGuta>sMocanu)
        cout<<sGuta<<" 1";
    else
        if(sGuta<sMocanu)
            cout<<sMocanu<<" 2";
        else
            cout<<sMocanu<<" 0";
    return 0;
}
