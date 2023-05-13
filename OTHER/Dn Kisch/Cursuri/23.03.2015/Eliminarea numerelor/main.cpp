#include <cstdio>

using namespace std;
int v[10000];
int main()
{
    freopen("elim.in","r",stdin);
    freopen("elim.out","w",stdout);
    int n,i,x=1,k=0;
    while(x!=0)
    {
        scanf("%d",&x);
        if(x==0)
            break;
        v[++k]=x;
    }
    for(i=1;i<=k;++i)
    {
        bool sw=true;
        int s1,s2;
        s1=s2=0;
        x=v[i];
        n=v[i+1];
        do
        {
         s1+=x%10;
         x/=10;
        }while(x>0);
        do
        {
            s2+=n%10;
            n/=10;
        }while(n>0);
        if(s1==s2)
            sw=false,++i;
        if(sw==true)
            printf("%d ",v[i]);
    }
    return 0;
}
