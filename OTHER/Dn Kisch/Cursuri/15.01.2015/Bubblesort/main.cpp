#include <algorithm>
#include <cstdio>
#include <ctime>
using namespace std;
int v[10000001];
int main()
{
    freopen("bubblesort.in","r",stdin);
    freopen("bubblesort.out","w",stdout);
    int n,i;
    clock_t time_start,time_end;
    time_start=clock();
    scanf("%d",&n);
    for(i=1; i<=n; i++)
        scanf("%d",&v[i]);
    int sortat,aux;
    do
    {
        sortat=1;
        for(i=1; i<n; i++)
            if(v[i]>v[i+1])
            {
                aux=v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
                sortat=0;
            }
    }while(sortat==0);
    ///sort(v+1,v+n+1);
    time_end=clock();
    printf("%lf\n",((double)time_end-time_start)/CLK_TCK);
    return 0;
}
