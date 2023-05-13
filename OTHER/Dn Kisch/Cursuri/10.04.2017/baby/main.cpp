#include <fstream>
#include <algorithm>
using namespace std;
struct babigarl
{
    int x,y;
} v[100001];
bool mycmp(babigarl a,babigarl b)
{
    return a.x+a.y>b.x+b.y;
}
int main()
{
    ifstream cin("baby.in");
    ofstream cout("baby.out");
    int n,i,m,t,ta;
    cin>>t;
    for(; t; --t)
    {
        bool ok=1;
        cin>>n;
        ta=0;
        for(i=1; i<=n; ++i)
        {
            cin>>v[i].x;
            ta+=v[i].x;
        }
        for(i=1; i<=n; ++i)
            cin>>v[i].y;
        sort(v+1,v+n+1,mycmp);
        for(i=1; i<=n; ++i)
        {
            ta-=v[i].x;
            if(ta>=v[i].y)
            {
                ok=0;
                break;
            }
        }
        cout<<ok<<endl;
    }
    return 0;
}
