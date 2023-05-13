#include <cstdio>
#include <cctype>
using namespace std;
char s[1001];
int f[10];
int main()
{
    freopen("magic.in","r",stdin);
    freopen("magic.out","w",stdout);
    int n,i,k=1;
    char c;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        scanf("%c",&c);
        if(c==' ' or c=='\n')
            i--;
        else
            if(isdigit(c)==0)
               s[++k]=c;
            else
                f[c-'0']=1;
    }
    for(i=2;i<=k;++i)
        printf("%c",toupper(s[i]));
    printf("\n");
    for(i=1;i<=9;++i)
        if(f[i]==1)
          break;
    if(f[0]==1)
    {
        printf("%d0",f[i]);
        for(int j=i+1;j<=9;++j)
            if(f[j]==1)
              printf("%d",j);
    }
    else
    {
      for(i=0;i<=9;++i)
            if(f[i]==1)
              printf("%d",i);
    }
    return 0;
}
