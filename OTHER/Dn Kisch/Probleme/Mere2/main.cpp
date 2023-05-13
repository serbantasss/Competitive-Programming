#include <cstdio>
#include <algorithm>
using namespace std;
int v[4],s[4],ind[4];
int main() {
    freopen("mere2.in","r",stdin);
    freopen("mere2.out","w",stdout);
    int i,aux,op=0,j;
    bool sortat=false;
    scanf("%d%d%d",&v[1],&v[2],&v[3]);
    for(i=1; i<=3; ++i)
        ind[i]=i;
    while(1)
    {
        do
        {
            sortat=1;
            for(i=1; i<3; i++)
                if(v[i]>v[i+1])
                {
                    aux=v[i];
                    v[i]=v[i+1];
                    v[i+1]=aux;
                    aux=ind[i];
                    ind[i]=ind[i+1];
                    ind[i+1]=aux;
                    aux=s[i];
                    s[i]=s[i+1];
                    s[i+1]=aux;
                    sortat=0;
                }
        } while(sortat==0);
        op++;
        for(i=1; i<=3; i++)
        {
            v[i]=v[i]-i;
            s[i]=s[i]+i;
        }
        if(v[1]<0||v[2]<0||v[3]<0)
        {
            printf("-1\n-1 -1 -1");
            break;
        }
        else
           if(v[1]==v[2]&&v[2]==v[3])
           {
              printf("%d\n",op);
              for(i=1; i<=3; i++)
                for(j=1; j<=3; j++)
                    if(ind[j]==i)
                        printf("%d ",s[j]);
            break;
        }
    }
    return 0;
}

