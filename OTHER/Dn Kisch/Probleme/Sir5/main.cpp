#include<cstdio>
using namespace std;

int main()
{
    freopen("sir5.in","r",stdin);
    freopen("sir5.out","w",stdout);
    long x,y,p=1,z;
    int k,s=0,a,b,i,c,sa;
    scanf("%d%d%d%d",&k,&x,&a,&b);
    s=1;
    sa=1;
    for(i=2; i<=k; i++)
    {
        s=(s+sa+i)%10;
        sa=(sa+i)%10;
    }
    printf("%d\n",s);
    y=x;
    k=1;
    do
    {
        k++;
        y/=10;
        p=p*10;
    }
    while(y>9);
    if(y==k)
    {
        z=0;
        for(i=1; i<=k+1; i++)
            z=z*10+i;
    }
    else
        z=(x%p)*10+y;
    printf("%d\n",z);
    if(a<b)
        printf("%d",b-a);
    else
        printf("%d",0);
    return 0;
}
