#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>m>>n;
    int k=n,i,j;
    for(i=1;i<=m;++i)
    {
        for(j=1;j<=i;++j)
        {
            cout<<k<<" ";
            if(k==9)
                k=1;
            else
              k++;
        }
        cout<<"\n";
    }
    return 0;
}
