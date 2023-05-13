#include <cstdio>
#include <cstring>
#include <cctype>

using namespace std;
char s[10005],*p,voc[]="aeiouAEIOU",sep[]=" .,;!";
int f[26];
int main()
{
    int n,i;
    gets(s);
    n=strlen(s);
    for(i=0;i<n;++i)
        if(f[s[i]-'a']==0)
        {
        printf("%c",s[i]);
        f[s[i]-'a']=1;
        }
    return 0;
}
