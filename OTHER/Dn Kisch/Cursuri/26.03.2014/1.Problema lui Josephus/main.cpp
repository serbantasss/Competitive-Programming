#include <cstdio>

using namespace std;
int v[1001];
int main()
{
    int n,i,k,nr=1;
    scanf("%d%d",&n,&k);
    for(i=1;i<=n;++i)
        v[i]=i;
    for(i=1;i<=n;++i)
    {
        if(i==n)
          i=1;
        if(nr==k)
        {
            printf("%d ",v[i]);
            for(int j=i;j<=n-1;++j)
                v[j]=v[j+1];
            n--;
            if(i==n)
                i=1;
            nr=1;
        }
          nr++;
    }
    return 0;
}
