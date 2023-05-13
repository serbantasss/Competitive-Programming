#include <cstdio>

using namespace std;
int main()
{
    int p,n,i;
    scanf("%d%d",&p,&n);
    for(i=2;i<=n;++i)
    {
        if(i%2==0)
            p+=10;
        else
            p+=20;
    }
    printf("%d",p);
    return 0;
}
