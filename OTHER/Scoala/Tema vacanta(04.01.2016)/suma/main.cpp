#include <fstream>

using namespace std;
int v[1005];
int main()
{
    ifstream cin("suma.in");
    ofstream cout("suma.out");
    int n,i,cn;
    cin>>n;
    v[1]=1;
    n--;
    cn=n;
    for(i=n+1;n>0;--i)
    {
        if(n>9)
            v[i]=9,n-=9;
        else
        {
            v[i]=n;
            n=0;
            break;
        }
    }
    for(i=1;i<=cn+1;++i)
    {
        cout<<v[i];
        v[i]=0;
    }
    n=cn+1;
    cout<<endl;
    for(i=1;n>0;++i)
    {
        if(n>9)
            v[i]=9,n-=9;
        else
        {
            v[i]=n;
            n=0;
            break;
        }
    }
    for(i=1;i<=cn+1;++i)
    {
        cout<<v[i];
        v[i]=0;
    }
    return 0;
}
