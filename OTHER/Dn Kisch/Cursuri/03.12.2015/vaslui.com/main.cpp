#include <cstdio>

using namespace std;
int B(int x)
{
    int nr=0;
    while(x)
    {
        if(x&1)
            nr++;
        x=x>>1;
    }
    return nr;
}
int v[50001];
int main()
{
    freopen("secvb.in","r",stdin);
    freopen("secvb.out","w",stdout);
    int n,i,t,x,nr=0;
    scanf("%d%d",&n,&t);
    for(i=1;i<=n;++i)
        {
            scanf("%d",&x);
            v[i]=B(x);
        }
    int st=1,dr=1,s=0;
    for(st=1,dr=1;dr<=n;++dr)
    {
        s+=v[dr];
        while(s>=t)
            {
                if(s==t)
                    nr++;
                s-=v[st];
                st++;
            }
    }
    printf("%d",nr);
    return 0;
}
