#include <cstdio>

using namespace std;
bool vcprim(int x)
{
    bool prime=true;
    int s;
    do
    {
        s+=x%10;
        x/=10;
    }while(x);
    if(s<2)
        prime=false;
    if(s%2==0 && s>2)
        prime=false;
    for(int d=3;d*d<=s;++d)
        if(s%d==0)
        {
            prime=false;
            break;
        }
    return prime;
}
int main()
{
    freopen("vect3.in","r",stdin);
    freopen("vect3.out","w",stdout);
    int n,i,x,nr=0;
    bool ok=false;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        int s=0;
        scanf("%d",&x);
        if(vcprim(x)==true)
            ok=true,nr++;
    }
    if(ok==false)
        printf("NU EXISTA");
    else
        printf("%d",nr);
    return 0;
}
