#include <cstdio>
#include <cstring>
using namespace std;
int viz[10],d[10][10],m[10][10],q[10],v[1000];
void maked()
{
    int cif,i,j,p,u,temp;
    for(cif=0;cif<=9;++cif)
    {
        memset(viz,0,sizeof(viz));
        q[0]=cif;
        p=u=0;
        viz[cif]=1;
        while(p<=u)
        {
            temp=q[p++];
            for(j=0;j<=9;++j)
                if(j!=temp && m[temp][j] && !viz[j])
                {
                q[++u]=j;
                viz[j]=1;
                d[cif][j]=d[cif][temp]+1;
                }
        }
    }
}
int main()
{
   freopen("concurs2.in","r",stdin);
   freopen("concurs2.out","w",stdout);
    int n,i,j,x,k,r;
    scanf("%d %d",&n,&k);
    for(i=1;i<=n;++i)
        scanf("%1d",&v[i]);
    for(i=0;i<=9;++i)
        for(j=0;j<=9;++j)
    {
        scanf("%1d",&x);
        m[i][j]=x;
    }
    maked();
    r=0;
    for(i=1;i<=n && r<k;i++)
    {
        for(j=9;j>=v[i];--j)
            if(d[v[i]][j]+r<=k && d[v[i]][j]>0 && v[i]!=j)
        {
            r+=d[v[i]][j];
            v[i]=j;
            break;
        }
    }
    for(i=1;i<=n;++i)
        printf("%d",v[i]);
    return 0;
}
