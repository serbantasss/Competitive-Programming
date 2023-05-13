#include <cstdio>
#include <cstring>
#include <cctype>
using namespace std;
char s[210];
int main()
{
    freopen("nrcuv.in","r",stdin);
    freopen("nrcuv.out","w",stdout);
    int n,i,nr=0;
    gets(s);
    n=strlen(s);
    for(i=n-1;i>=0;--i)
     {
     s[i+1]=s[i];
     s[i+2]=s[i+1];
     }
    s[0]=s[1]=' ';
    for(i=2;i<=n+2;++i)
       if(isalpha(s[i]))
            if(!(isalpha(s[i-1]) || (s[i-1]=='-' && isalpha(s[i-2]))))
                nr++;
    printf("%d",nr);
    return 0;
}
