#include <cstdio>+
#include <cstring>
#include <cctype>
using namespace std;
char s[1001],voc[]="aeiouAEIOU",*p;
int n,i=0,nr;
int main()
{
    gets(s);
    n=strlen(s);
    nr=0;
    for(i=0;i<n;++i)
    {
        p=strchr(voc,s[i]);
        if(p)
            {
                strcpy(s+i,s+i+1);
                i--;
                n--;
            }
    }
    s[n]=NULL;
    printf("%s",s);
    return 0;
}
