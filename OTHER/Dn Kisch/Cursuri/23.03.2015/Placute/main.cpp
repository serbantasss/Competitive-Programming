#include <cstdio>

using namespace std;
int f[10],v[10];
int main()
{
    freopen("placute.in","r",stdin);
    freopen("placute.out","w",stdout);
    int n,m,i,a,b;
    scanf("%d%d",&n,&m);
    for(i=1;i<=m;++i)
    {
        scanf("%d",&a);
        f[a]++;
    }
    a=1;
    b=2;i=3;
    if(n>1)
      v[1]=v[2]=1;
    else
        v[1]=1;
    while(i<=n)
    {
        int s=a+b,c;
        c=s;
        do
        {
            v[c%10]++;
            c/=10;
        }while(c>0);
        a=b;
        b=s;
        i++;
    }
    int dif=0;bool ok=true;
    for(i=0;i<=9;++i)
        if(v[i]>f[i])
            dif+=v[i]-f[i],ok=false;
    if(ok==true)
        printf("Da");
    else{
    printf("Nu\n%d ",dif);
    for(i=0;i<=9;++i)
        if(v[i]>f[i])
                printf("%d ",i);
                }
    return 0;
}
