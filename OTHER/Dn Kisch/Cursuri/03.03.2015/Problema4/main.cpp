#include <cstdio>
long long int nr=0,n,c,p=1;
int main()
{
    freopen("date.in","r",stdin);
    freopen("date.out","w",stdout);
    while(scanf("%d",&c)!=EOF)
    {
        nr=nr+c*p;
        p*=2;
    }
    printf("%d",nr);
    return 0;
}
