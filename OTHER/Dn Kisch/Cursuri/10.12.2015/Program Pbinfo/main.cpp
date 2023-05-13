 #include <fstream>
using namespace std;
int f[109];
int main()
{
    ifstream cin("1.in");
    ofstream cout("1.out");
    int n,i,x;
    while(cin>>x)
        {
        f[x]++;
        }
    for(i=1;i<=99;i+=2)
        if(f[i])
            cout<<i<<" ";
    cout<<endl;
    for(i=98;i>=0;i-=2)
        if(f[i])
            cout<<i<<" ";
    return 0;
}
