#include <cstdio>

using namespace std;

int main()
{
    freopen("numere12.in","r",stdin);
    freopen("numere12.out","w",stdout);
    int a,b,x,cx,nr=0;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        x=i;
        bool ok=true;
        for(;ok && x;)
        {
            int c=x%10;
            if(c!=0)
                if(i%c!=0)
                    ok=false;
            x/=10;
        }
        if(ok)
            ++nr;
    }
    printf("%d",nr);
    return 0;
}
