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
void div(int n)
{
    int d;
    for(d=2;d*d<n;++d)
        if(n%d==0)
          printf("%d %d ",d,n/d);
    if(d*d==n)
        printf("%d ",d);
    if(n==1)
        printf("1 ");
}
int main()
{
    freopen("vect6.in","r",stdin);
    freopen("vect6.out","w",stdout);
    int n,i,x;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        scanf("%d",&x);
        if(vprim(x)==false)
        {
            div(x);
            printf("\n");
        }
    }
    return 0;
}
