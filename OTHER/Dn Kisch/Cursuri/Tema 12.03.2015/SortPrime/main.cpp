#include <iostream>
#include <algorithm>
using namespace std;
struct vect
{
    int inaltime,pozitie;
};
vect v[1001];
int main()
{
    int n,i,x;
    cin>>n;
    for(i=1;i<=n;++i)
    {
        cin>>x;
        v[i].inaltime=x;
        v[i].pozitie=i;
    }
    sort(v+1,v+n+1);
    for(i=1;i<=n;++i)
        cout<<v[i].pozitie<<" ";
    return 0;
}
