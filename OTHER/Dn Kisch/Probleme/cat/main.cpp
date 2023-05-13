#include <cstdio>

using namespace std;

int main()
{
    freopen("cat.in","r",stdin);
    freopen("cat.out","w",stdout);
    int n,k,a,i;
    scanf("%d%d%d",&n,&k,&a);
    for(i=1;i<=n;++i)
       {
           int cn=n,prinsi=0,urmk=(i+k)%n;
           bool ok=false;
           while(prinsi<n)
           {
            if(urmk==a)
                {ok=true;break;}
            prinsi++;--cn;
            urmk=(urmk+k)%cn;
           }
           if(ok==false)
              {
                printf("%d",i);
                break;
           }
       }
    return 0;
}
