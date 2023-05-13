#include <cstdio>
#include <cstring>
#include <cctype>
using namespace std;
char d[1001],s[1001];
int n,n1,n2,i=0;
int main()
{
    gets(s);
    gets(d);
    scanf("%d",&n);
    n1=strlen(d);
    n2=strlen(s);
    strncpy(s,d,n);
    s[n2-(n2-n)]=NULL;
    printf("%s",d);
    return 0;
}
