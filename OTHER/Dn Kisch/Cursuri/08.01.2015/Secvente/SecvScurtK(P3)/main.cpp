#include <cstdio>
using namespace std;
int n,v[1000001],k,f[10001];
int dr,st,t;
int main()
{
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;++i)
        scanf("%d",&v[i]);
    int min=n+1;
    for(st=dr=1;dr<=n;++dr)
    {
        if(v[dr]>k)
            continue;
        f[v[dr]]++;
        if(f[v[dr]]==1)
            t++;
        while(t==k)
        {
            if(dr-st+1<min)
                min=dr-st+1;
            if(v[st]<=k)
            {
                f[v[st]]--;
                if(f[v[st]]==0)
                    t--;
            }
            st++;
        }
    }
    printf("%d",min);
    return 0;
}
