#include <fstream>

using namespace std;
struct cont
{
    int banca,gen,suma;
};
cont f[105];
int main()
{
    ifstream cin("conturi.in");
    ofstream cout("conturi.out");
    int n,k,i,x,maxs=0;
    cin>>n>>k;
    for(i=1;i<=n;++i)
    {
        cin>>x;
        f[i].banca=x/100000;
        f[i].gen=x/10000%10;
        f[i].suma=x%10000;
    }
    for(i=1;i<=n;++i)
        if(f[i].banca==k && f[i].gen==1)
            if(f[i].suma>maxs)
                maxs=f[i].suma;
    cout<<maxs;
    return 0;
}
