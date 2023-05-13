#include <cstdio>

using namespace std;
int v[101];


int main()
{
    freopen("vect4.in","r",stdin);
    freopen("vect4.out","w",stdout);
    int n,i,a,b,c;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
        scanf("%d",&v[i]);
    if(n==1)
        printf("%d",v[i]);
    else
    {
      9  int start,finish,x,lungime=0,longmax;
        int st=1,dr=2;
        x=v[st];
        longmax=start=finish=0;
        for(st=1,dr=2;dr<=n;++dr)
        {
            if(x<=v[dr])
            {
                x=v[dr];
            }
            else
            {
                if(dr-st+1>longmax)
                    longmax=dr-st,start=st,finish=dr-1;
                st=dr;
                x=v[st];
            }
        }
        if(dr-st+1>longmax)
                    longmax=dr-st,start=st,finish=dr-1;
        for(i=start;i<=finish;++i)
            printf("%d ",v[i]);
    }
    return 0;
}
