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
    freopen("vect2.in","r",stdin);
    freopen("vect2.out","w",stdout);
    int n,i,x,nr=0;
    bool ok=false;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        scanf("%d",&x);
        if(vprim(x)==true)
            ok=true,printf("%d ",i),nr++;
    }
    if(ok==false)
        printf("NU EXISTA");
    else
        printf("\n%d",nr);
    return 0;
}
