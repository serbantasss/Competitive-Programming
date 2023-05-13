#include <cstdio>
#include <cmath>
using namespace std;
int v[1594400];
int f[32];
long long put;
int main()
{
    freopen("sah.in","r",stdin);
    freopen("sah.out","w",stdout);
    int n,m,max=0;
    scanf("%d%d\n",&n,&m);
    put=pow(3,m-1);
    for(register int i=1;i<=n;++i)
    {
        long long int nr=0,p=put;
        for(register int j=1;j<=m;++j)
           {
               char  ch;
            ch=getc(stdin);
            if(ch=='X')
               nr=nr+p*2;
            if(ch=='O')
              nr=nr+p*1;
            p/=3;
           }
        v[nr]++;
        if(v[nr]>max)
          max=v[nr];
        scanf("\n");
    }
    for(register int i=179;i<=1594400;++i)
       if(v[i]==max)
        {
            int ci=i,k=0;
            while(ci>0)
            {
                f[++k]=ci%3;
                ci/=3;
            }
            for(int j=k;j>=1;--j)
               {
                if(f[j]==2)
                   printf("X");
                if(f[j]==1)
                  printf("O");
                if(f[j]==0)
                   printf(" ");}
            printf("\n");
        }
    return 0;
}
