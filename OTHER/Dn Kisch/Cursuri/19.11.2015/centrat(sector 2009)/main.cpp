#include <cstdio>
#include <cstring>
#include <cctype>

using namespace std;
char s[260],cp[260],*p,voc[]="aeiouAEIOU",sep[]=" ,;!";
int v[260],rand[31];
int main()
{
    freopen("centrat.in","r",stdin);
    freopen("centrat.out","w",stdout);
    int n,i,k=0,sum,nr=0,m=0;
    scanf("%d\n",&n);
    gets(s);
    strcpy(cp,s);
    p=strtok(cp,sep);
    while(p)
    {
        v[++k]=strlen(p);
        p=strtok(NULL,sep);
    }
    sum=0;
    sum=sum+v[1];
    for(i=2;i<=k;++i)
    {
        if(v[i]+sum<=n)
            sum=sum+v[i]+1;
        else
        {
            m++;
            rand[m]=n-sum;
            sum=v[i];
        }
    }
    if(v[i]+sum<=n)
            sum=sum+v[i]+1;
        else
        {
            m++;
            rand[m]=n-sum;
            sum=v[i];
        }
    printf("%d\n",m);
    return 0;
}
