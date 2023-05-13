#include <cstdio>
#include <cstring>
using namespace std;
char s[1001],ch,*p;
int main()
{
    int n,i;
    gets(s);
    scanf("%c",&ch);
    n=strlen(s);
    p=strchr(s,ch);
    while(p!=NULL)
    {
        printf("%d ",p-s);
        p=strchr(p+1,ch);
    }
    return 0;
}
