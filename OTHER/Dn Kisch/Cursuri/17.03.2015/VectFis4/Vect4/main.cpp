#include <cstdio>

using namespace std;
bool vprim(int x)
{
    int s=0,cx=x;
    do
    {
      s+=cx%10;
      cx/=10;
    }while(cx);
    if(x%s==0)
       return true;
    else
        return false;
}
int main()
{
    freopen("vect4.in","r",stdin);
    freopen("vect4.out","w",stdout);
    int n,i,x;
    bool ok=false;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        scanf("%d",&x);
        if(vprim(x)==true)
            ok=true,printf("%d ",x);
    }
    if(ok==false)
        printf("NU EXISTA");
    return 0;
}
