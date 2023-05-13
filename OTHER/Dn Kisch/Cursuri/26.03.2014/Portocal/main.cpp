#include <cstdio>

using namespace std;

int main()
{
    int n,p,k,i;
    scanf("%d%d%d",&n,&k,&p);
    int s,raspuns;
    s=0;
    for(i=1;i<=n;++i)
        s=(s+k-1)%i+1;
    if(s<p)
    {
        raspuns=(n+s-p)%n;
        if(raspuns==0)
            raspuns=n;
    }
    else
    {
        raspuns=n-(s-p)+1;
        raspuns%=n;
        if(raspuns==0)
            raspuns=n;
    }
    printf("%d",raspuns);
    return 0;
}
