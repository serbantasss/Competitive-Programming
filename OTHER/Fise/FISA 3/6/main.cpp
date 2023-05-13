#include <iostream>

using namespace std;
int v[10001];
int main()
{
    int n,nr=0;
    cin>>n;
    for(i=1;i<=n;++i)
    {
        cin>>v[i];
        bool ok=true;
        for(j=1;j<=i-1;++j)
            if(v[i]==v[j])
        {
            ok=false;
            break;
        }
        if(ok==true)
            nr++;
    }
    cout<<nr<<" mese\n";
    for(i=1;i<=n;++i)
    {
        if(v[i]!=-1)
            {
                for(j=1;j<=n;++j)
                    if(v[i]==v[j])
                {
                    v[i]
                }
            }
    }
    return 0;
}
