#include <iostream>
#include <queue>
using namespace std;
typedef pair<int,int> ii;
deque<ii>  q;
int v[1000001];
int main()
{
    int i,n,k,max;
    cin>>n;
    for(i=1; i<=n; ++i)
        cin>>v[i];
    for(k=1; k<=n; ++k)
    {
        max=v[i];
        for(i=1; i<=n; ++i)
        {
            while(!q.empty() && q.back().first>=v[i])
                q.pop_back();
            q.push_back(ii(v[i],i));
            while(!q.empty() && i-q.front().second+1>k)
                q.pop_front();
            if(i>=k)
                if(q.front().first>max)
                    max=q.front().first;
        }
        cout<<max<<" ";
    }
    return 0;
}
