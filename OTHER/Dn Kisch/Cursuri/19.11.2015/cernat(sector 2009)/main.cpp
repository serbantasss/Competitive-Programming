#include <cstdio>
#include <cstring>
#include <cctype>

using namespace std;
char s[260],*p,sep[]=" ,;!";
int v[260],rand[31];
int main()
{
    freopen("centrat.in","r",stdin);
    freopen("centrat.out","w",stdout);
    int n,i,k=0,sum,m=0;
    scanf("%d\n",&n);
    gets(s);
    p=strtok(s,sep);
    while(p)
    {
        v[++k]=strlen(p);
        p=strtok(NULL,sep);
    }
    sum=v[1];
    for(i=2;i<=k;++i)
    {
        if(v[i]+sum+1<=n)
            sum=sum+v[i]+1;
        else
        {
            m++;
            rand[m]=(n-sum)/2;
            sum=v[i];
        }
    }
    if(sum>0)
        {
            m++;
            rand[m]=(n-sum)/2;
        }
    printf("%d\n",m);
    for(i=1;i<=m;++i)
        printf("%d\n",rand[i]);
    return 0;
}
