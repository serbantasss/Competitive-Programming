#include <cstdio>
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
            nr++;
    }
    printf("%d\n",nr);
    return 0;
}
