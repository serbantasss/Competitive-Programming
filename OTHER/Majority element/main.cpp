#include <cstdio>
using namespace std;
int v[1001];
int main()
{
    int n,i,k=1,maj=1,cand,x;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
        scanf("%d",&v[i]);
    for(i = 1; i<=n ; i++)
    {
        if(v[maj] == v[i])
            k++;
        else
            k--;
        if(k == 0)
        {
            x = i;
            k = 1;
        }
    }
    cand=v[maj];
    k=0;
    for (i = 1; i<=n ; i++)
      if(v[i] == cand)
         k++;
    if (k > n/2)
        printf(" %d  %d ",cand,k);
    else
       printf("Nu exista");
    return 0;
}
