#include <cstdio>

using namespace std;
int v[101],x,n;
void main2()
{
    int d,i,nr=0;
    if(x==0)
        printf("%d",n);
    else
    {
        if(x==1)
            printf("1 ");
        else
        {
            for(d=2; d*d<x; ++d)
                if(x%d==0)
                {
                    for(i=1; i<=n; ++i)
                        if(v[i]==d)
                        {
                            nr++;
                            break;
                        }
                    for(i=1; i<=n; ++i)
                        if(v[i]==x/d)
                        {
                            nr++;
                            break;
                        }

                }
            if(d*d==x)
                for(i=1; i<=n; ++i)
                    if(v[i]==d)
                    {
                        nr++;
                        break;
                    }
        }
        if(nr==0)
            printf("NU EXISTA");
        else
            printf("%d",nr);
    }
}
int main()
{
    freopen("vect7.in","r",stdin);
    freopen("vect7.out","w",stdout);
    int i;
    scanf("%d%d",&n,&x);
    for(i=1; i<=n; ++i)
    {
        scanf("%d",&v[i]);
    }
    main2();
    return 0;
}
