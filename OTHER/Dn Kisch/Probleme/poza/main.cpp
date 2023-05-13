#include <fstream>

using namespace std;
short int mat[156][156],matfin[156][156];
int n,rot,put2=1,m,i,j;
int main()
{
    ifstream cin("poza.in");
    ofstream cout("poza.out");
    cin>>n;
    for(i=1;i<=n;++i)
        for(j=1;j<=n;++j)
            cin>>mat[i][j];
    cin>>m;
    for(i=1;i<=m;++i)
    {
        cin>>j;
        if(j==1)
        {
            rot++;
        }
        else
        {
            put2*=2;
        }
    }
    for(i=1;i<=n;++i)
        for(j=1;j<=n;++j)
        {
            for(int i1=(i-1)*put2+1;i1<=i*put2;++i1)
                for(int j1=(j-1)*put2+1;j1<=j*put2;++j1)
                    matfin[i1][j1]=mat[i][j];
        }
    if(rot%4==0)
    {
        cout<<put2*n<<"\n";
        for(i=1;i<=put2*n;++i)
        {
            for(j=1;j<=put2*n;++j)
                cout<<matfin[i][j]<<" ";
            cout<<endl;
        }
        return 0;
    }
    if(rot%4==1)
    {
        cout<<put2*n<<"\n";
        for(j=put2*n;j>=1;--j)
        {
            for(i=1;i<=put2*n;++i)
                cout<<matfin[i][j]<<" ";
            cout<<endl;
        }
        return 0;
    }
    if(rot%4==2)
    {
        cout<<put2*n<<"\n";
        for(i=put2*n;i>=1;--i)
        {
            for(j=put2*n;j>=1;--j)
                cout<<matfin[i][j]<<" ";
            cout<<endl;
        }
        return 0;
    }
    if(rot%4==3)
    {
        cout<<put2*n<<"\n";
        for(j=1;j<=put2*n;++j)
        {
            for(i=put2*n;i>=1;--i)
                cout<<matfin[i][j]<<" ";
            cout<<endl;
        }
        return 0;
    }
    return 0;
}
