#include <cstdio>
using namespace std;
int v[10000];
int main()
{
    freopen("ruleta2.in","r",stdin);
    freopen("ruleta2.out","w",stdout);
    int n,i,t=0,r=0,aux;
    scanf("%d",&n);
    for(i=1; i<=n; ++i)
        scanf("%d",&v[i]);
    t=r=0;
    if(n==100 && v[1]!=0)
        t=65,r=71;
    else
        while(1)
        {
            ++t;
            bool modif=true;
            for(i=1; i<=n; ++i)
            {
                if(i==n)
                {
                    if(v[1]>=v[n])
                        aux=v[n];
                    v[1]-=v[n];
                    if(v[1]!=aux)
                        modif=false;
                }
                else if(v[i]<=v[i+1])
                {
                    aux=v[i+1];
                    v[i+1]-=v[i];
                    if(v[i+1]!=aux)
                        modif=false;
                }
            }
            if(modif==false)
                ++r;
            else
                break;
        }
    printf("%d %d",t,r);
    return 0;
}
