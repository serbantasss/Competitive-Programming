#include <cstdio>

using namespace std;
bool f[55];
int main()
{
    freopen("joc.in","r",stdin);
    freopen("joc.out","w",stdout);
    int n,i,np,nr=1;
    bool sens=0;
    ///sens=0 -->;sens=1 <---
    scanf("%d%d",&n,&np);
    i=1;
    while(nr<=np)
    {
        if(nr%5==0 && f[i]==0)
        {
            printf("%d ",i);
            f[i]=1;
        }
        if(nr%7==0 ||nr%10==7 || nr%5==0)
            if(sens==0)
                sens=1;
            else
                sens=0;
        if(sens==1)
            i--;
        else
            i++;
        if(i==n+1)
            i=1;
        if(i==0)
            i=n;
        nr++;
    }
    return 0;
}
