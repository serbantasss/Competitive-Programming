#include <cstdio>
#include <algorithm>
using namespace std;
int v[101];
int main()
{
    freopen("1.in","r",stdin);
    freopen("1.out","w",stdout);
    int n,ok,i,max=0,min=10,nrz=0;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        scanf("%d",&v[i]);
        if(v[i]%2==0)
        {
            ok=1;
            if(max<v[i])
                max=v[i];
        }
        if(v[i]!=0)
            {if(v[i]<min)
              min=v[i];}
        else
           nrz++;
    }
    sort(v+1,v+n+1);
    if(ok)
    {
       printf("%d",min);
       for(i=1;i<=nrz;++i)
        printf("0");
       int ap=0;
    }
    else
        printf("-1");
    return 0;
}
