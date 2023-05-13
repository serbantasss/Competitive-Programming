#include <cstdio>

using namespace std;
int v1[1001],v2[1001];
bool check[1001];
bool injur(int i,int j,int x,int y)
{
    if(i==x && j==y)
        return 1;
    if(i-1==x && j==y)
        return 1;
    if(i+1==x && j==y)
        return 1;
    if(i==x && j-1==y)
        return 1;
    if(i==x && j+1==y)
        return 1;
    if(i+1==x && j-1==y)
        return 1;
    if(i+1==x && j+1==y)
        return 1;
    if(i-1==x && j-1==y)
        return 1;
    if(i-1==x && j+1==y)
        return 1;
    return 0;
}
int main()
{
    freopen("spioni.in","r",stdin);
    freopen("spioni.out","w",stdout);
    int n,m,x,y,k,ok=0;
    char ch;
    scanf("%d",&n);
    for(int i=1;i<=n;++i)
        scanf("%d %d\n",&v1[i],&v2[i]);
    x=y=0;
    scanf("%d\n",&k);
    for(int ii=1;ii<=k;++ii)
    {
        scanf("%c",&ch);
        if(ch=='N')
            x--;
        if(ch=='S')
            x++;
        if(ch=='V')
            y--;
        if(ch=='E')
            y++;
        for(int i=1;i<=n;++i)
            if(injur(x,y,v1[i],v2[i]) && check[i]==0)
            {
            check[i]=1;
            ok=1;
            printf("%d\n",i);
            }
    }
    if(ok==0)
        printf("-1");
    return 0;
}
