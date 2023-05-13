#include <algorithm>
#include <cstdio>
#include <ctime>
using namespace std;
int v[10000001];
int main()
{
    freopen("sortSTL.in","r",stdin);
    freopen("sortSTL.out","w",stdout);
    int n,i;
    clock_t time_start,time_end;
    time_start=clock();
    scanf("%d",&n);
    for(i=1; i<=n; i++)
        scanf("%d",&v[i]);
    sort(v+1,v+n+1);
    time_end=clock();
    printf("%lf\n",((double)time_end-time_start)/CLK_TCK);
    return 0;
}
