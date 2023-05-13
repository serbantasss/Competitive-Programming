#include <cstdio>
using namespace std;
int v[101],b[101],secv[101];
int main()
{
    freopen("vect3.in","r",stdin);
    freopen("vect3.out","w",stdout);
    int n,i,nr=1,max=0,c;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
        scanf("%d",&v[i]);
    int st=1,dr=1;
    secv[1]=v[1];c=v[st];
    for(st=1,dr=1;dr<=n;++dr)
    {
        if(c<v[dr])
            {
            nr++;
            secv[nr]=v[dr];
            c=v[dr];
            }
        if(dr==n)
        {
            if(nr>max)
            {
             for(i=1;i<=nr;i++)
                    b[i]=secv[i];
            max=nr;
            }
            st++;
            dr=st;
            secv[1]=v[st];
            nr=1;
            c=v[dr];
    }
    }
    for(i=1;i<=max;++i)
        printf("%d ",b[i]);
    return 0;
}
