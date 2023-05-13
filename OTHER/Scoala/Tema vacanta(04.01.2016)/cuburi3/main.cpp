#include <cstdio>

using namespace std;
int fd[1001],fc[1001];
int main()
{
    freopen("cuburi3.in","r",stdin);
    freopen("cuburi3.out","w",stdout);
    int n,i,c,d,nrd=0,nrc=0;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        scanf("%d%d",&d,&c);
        fd[d]++;
        fc[c]++;
    }
    for(i=1;i<=n;++i)
    {
        if(fd[i])
            nrd++;
        if(fc[i])
            nrc++;
    }
    if(nrd>nrc)
        printf("C %d",nrc);
    else
        if(nrd<nrc)
            printf("D %d",nrd);
        else
            printf("DC %d",nrd);
    return 0;
}
