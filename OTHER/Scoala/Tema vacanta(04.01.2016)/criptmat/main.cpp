#include <cstdio>
#include <cstring>
#include <cctype>
using namespace std;
char s[205],mat[205][205];
int main()
{
    freopen("criptmat.in","r",stdin);
    freopen("criptmat.out","w",stdout);
    int n,m,i,j,k;
    scanf("%d\n",&m);
    gets(s);
    n=strlen(s);
    j=0;
    for(k=1;k<=n/m;++k)
        if(k%2==1)
        {
            for(i=1;i<=m;++i)
                mat[k][i]=s[j],j++;
        }
        else
        {
           for(i=m;i>=1;--i)
                mat[k][i]=s[j],j++;
        }
    for(j=1;j<=m;++j)
        for(i=1;i<=n/m;++i)
            printf("%c",mat[i][j]);
    return 0;
}
