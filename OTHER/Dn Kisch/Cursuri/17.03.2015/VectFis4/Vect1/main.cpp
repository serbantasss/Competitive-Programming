#include <cstdio>

using namespace std;
bool vprim(int x)
{
    bool prime=true;
    if(x<2)
        prime=false;
    if(x%2==0 && x>2)
        prime=false;
    for(int d=3;d*d<=x;++d)
        if(x%d==0)
        {
            prime=false;
            break;
        }
    return prime;
}
int main()
{
    freopen("vect1.in","r",stdin);
    freopen("vect1.out","w",stdout);
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
