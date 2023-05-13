#include <cstdio>
#define intra "turneu.in"
#define iesi "turneu.out"
using namespace std;
struct op
{
    int nr=0;
    int DN=2;
};
op v[21];
int main()
{
    freopen(intra,"r",stdin);
    freopen(iesi,"w",stdout);
    int n,m,i;
    scanf("%d%d",&n,&m);
    for(i=1;i<=m;++i)
    {
        char c;int x;
        scanf("%c %d",&c,&x);
        if(c=='D')
          v[x].DN=1;
        else
            v[x].DN=0;
        v[x].nr++;
    }
    int max=0;
    printf("a)\n");
    for(i=1;i<=n;++i)
        {
        if(v[i].DN==1)
          printf("%d ",i);
        if(v[i].nr>max)
            max=v[i].nr;
        }
    printf("\nb)\n");
    for(i=1;i<=n;++i)
       if(v[i].nr==max)
        printf("%d ",i);
    printf("\nc)\n");
    for(i=1;i<=n;++i)
        if(v[i].DN==0)
           printf("%d ",i);
    return 0;
}
