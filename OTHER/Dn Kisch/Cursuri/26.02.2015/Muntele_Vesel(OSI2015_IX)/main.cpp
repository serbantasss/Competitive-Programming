#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
    freopen("muntevesel.in","r",stdin);
    freopen("muntevesel.out","w",stdout);
    int x1,x2,l=1,lmax=1,a=-1,b=-1;
    scanf("%d",&x1);
    while(scanf("%d",&x2)!=EOF)
    {
        if(x1==x2)
            l++;
        else
        {
            if(l==lmax)
            {
                x1=x2;
                l=1;
            }
            else
              if(l>lmax)
                 {
                lmax=l;
                x1=x2;
                l=1;
                  }
        }
    }
    if(x1==-1 || x2==-1)
        printf("0");
    else
        printf("%d %d %d",x1,x2,lmax);
    return 0;
}
