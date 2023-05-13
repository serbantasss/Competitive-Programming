#include <cstdio>

using namespace std;

int main()
{
    freopen("vect1.in","r",stdin);
    freopen("vect1.out","w",stdout);
    int n,i,x,cx;
    bool cresc=true;
    scanf("%d%d",&n,&x);
    if(n==1)
        printf("DA");
    else
    {
        cx=x;
    for(i=2;i<=n;++i)
    {
        scanf("%d",&x);
        if(x<cx)
            cresc=false;
        cx=x;
    }
    if(cresc==true)
        printf("DA");
    else
        printf("NU");
    }
    return 0;
}
