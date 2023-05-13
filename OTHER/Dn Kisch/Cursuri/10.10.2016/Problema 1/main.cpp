#include <cstdio>
#include <cstring>
#include <cctype>
using namespace std;
char s[1001],ch,*p;
int n,i=0;
int main()
{
    gets(s);
    scanf("%c",&ch);
    n=strlen(s);
    p=strchr(s,ch);
    while(p)
    {
        printf("%d ",p-s+1);
        p=strchr(p+1,ch);
    }
    return 0;
}
