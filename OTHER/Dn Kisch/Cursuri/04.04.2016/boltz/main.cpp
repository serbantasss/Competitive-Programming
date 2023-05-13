#include <cstdio>
using namespace std;
const int NMAX=350000;
int f[NMAX+5]; /// 4B * 350000=
int main()
{
    freopen("boltz.in","r",stdin);
    freopen("boltz.out","w",stdout);
    int n,m,op,x,i,d=2,e;
    scanf("%d%d\n",&n,&m);
    for(i=1;i<=m;i++)
    {
        scanf("%d%d\n",&op,&x);
        d=2;
        switch(op)
        {
            case 1:

                while(1LL*d*d<=x && x>1)
                {
                    e=0;
                    while(x%d==0)
                    {
                        e++;
                        x/=d;
                    }
                    if(e>0)
                    {
                        if(f[d]==0 || f[d]>e)
                        {
                           f[d]=e;
                        }
                    }
                    d++;

                }
                if(x>1)
                {
                 f[x]=1;
                }
                break;
            case 2:
              int boltz=0,cx=x;
              while(1LL*d*d<=x && x>1)
                {
                    e=0;
                    while(x%d==0)
                    {
                        e++;
                        x/=d;
                    }
                    if(e>0)
                    {
                     if(e>=f[d] && f[d]>0)
                        {
                            boltz=1;
                            break;
                        }

                    }
                    d++;
                }
                if(x>1 && boltz!=1)
                {
                    if(f[x]==1)
                       boltz=1;
                }
                if(boltz==1)
                {
                    printf("BOLTZ\n");
                }
                else
                printf("%d\n",cx);
                break;
        }
    }
    return 0;
}

