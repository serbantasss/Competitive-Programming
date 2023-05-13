#include <cstdio>
#include <cstring>
using namespace std;
char s[256],*p;
int v[256],spatii[256];
int main()
{
    freopen("centrat.in","r",stdin);
    freopen("centrat.out","w",stdout);
    int n,m=0,i,l,nr=0,par,sum;
    scanf("%d\n",&n);
    par=n%2;
    gets(s);
    p=strtok(s," ");
    l=strlen(s);
    while(p)
    {
        v[++nr]=strlen(p);
        p=strtok(NULL," ");
    }
    sum=v[1];
    for(i=2;i<=nr;++i)
        if(sum+1+v[i]<=n)
            sum+=v[i]+1;
        else
        {
            m++;
            spatii[m]=(n-sum)/2;
            sum=v[i];
        }
    m++;
    spatii[m]=(n-sum)/2;
    printf("%d\n",m);
    for(i=1;i<=m;++i)
        printf("%d\n",spatii[i]);
    return 0;
}
