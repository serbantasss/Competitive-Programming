#include <cstdio>
using namespace std;
int main()
{
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
    int x;
    while(x>0)
    {
        int d=2,nr=2;
        scanf("%d",&x);
        if(x==0)
            break;
        for(d=2;d*d<x;++d)
            if(x%d==0)
                nr+=2;
        if(d*d==x)
            nr++;
        printf("%d\n",nr);
    }
    return 0;
}

