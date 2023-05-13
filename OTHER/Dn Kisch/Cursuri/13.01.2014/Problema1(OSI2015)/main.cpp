#include <cstdio>

using namespace std;

int main()
{
    freopen("pb.in","r",stdin);
    freopen("pb2.out","w",stdout);
    int n,m,x,nr1=0,nr2=0;
    scanf("%d%d",&n,&m);
    if(n<m)
       {
      for(int i=n;i<=m;++i)
        if(i%3==0)
            nr1++;
            }
    else
        {
        for(int i=m;i<=n;++i)
          if(i%3==0)
            nr1++;
            }
    printf("%d\n",nr1);
    x=n*m;
    do
    {
       nr2++;
       x/=10;
    }while(x && x%10==0);
    printf("%d",nr2);
    return 0;
}
