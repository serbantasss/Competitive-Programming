#include <cstdio>
using namespace std;

int vertical[]= {4, 2, 2, 2, 3, 2, 3, 2, 4, 3};
int orizontal[]= {2, 0, 3, 3, 1, 3, 3, 1, 3, 3};
struct op
{
    int p1,p2,p3,p4;
};
op max,min;
int n,m,num_variant;
int h1,h2,cphv,cpho,m1,m2,cpmv,cpmo;// optioanal
int main()
{
    freopen("chibrituri.in","r",stdin);
    freopen("chibrituri.out","w",stdout);
    scanf("%d%d",&n,&m);
    int i,j;
    for(i=0; i<=23; i++)
    {
        h1=i/10;
        h2=i%10;
        cphv=vertical[h1]+vertical[h2];
        cpho=orizontal[h1]+orizontal[h2];
        for(j=0; j<=59; j++)
        {
            m1=j/10;
            m2=j%10;
            cpmv=vertical[m1]+vertical[m2];
            cpmo=orizontal[m1]+orizontal[m2];
            if(cphv+cpmv==n && cpho+cpmo==m)
            {
                num_variant++;
                if(!(num_variant>1))
                {
                    min.p1=h1;
                    min.p2=h2;
                    min.p3=m1;
                    min.p4=m2;
                }
                max.p1=h1;
                max.p2=h2;
                max.p3=m1;
                max.p4=m2;
            }
        }
    }
    printf("%d\n",num_variant);
    printf("%d%d:%d%d\n",min.p1,min.p2,min.p3,min.p4);
    printf("%d%d:%d%d",max.p1,max.p2,max.p3,max.p4);
    return 0;
}
