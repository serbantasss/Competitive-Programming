#include <cstdio>

using namespace std;
int v[30005];
int main()
{
    freopen("crioac.in","r",stdin);
    freopen("crioac.out","w",stdout);
    int n,a,b,i,nr1,nr2;
    scanf("%d%d%d",&n,&a,&b);
    nr1=n/a+1;
    nr2=n/b+1;
    if(nr1<nr2)
        printf("%d\n",nr1);
    else
        printf("%d\n",nr2);
    int c=0;
    nr1=nr2=0;
    for(i=a;i<=n;i+=a)
    {
        v[i]=1+nr1*10;
        nr1++;
    }
    for(i=n-b+1;i>=1;i-=b)
        if(v[i]%10==1 && v[i]/10==nr2)
    {
      c=i;
      nr2++;
    }
    else
        nr2++;
    printf("%d",c);
    return 0;
}
