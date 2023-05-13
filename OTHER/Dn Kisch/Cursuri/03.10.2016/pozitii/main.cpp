#include <cstdio>
#include <cstring>
#include <cctype>
using namespace std;
char s[260];
bool vocala(char c)
{
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        return 1;
    return 0;
}
int main()
{
    int i,n,nr=0;
    bool steag=1,cons=0;
    gets(s);
    n=strlen(s);
    for(i=0;i<n;++i)
    {
        if(vocala(s[i]))
            if(s[i]!='i')
                steag=0;
        if(!vocala(s[i]))
            cons=1;
    }
    if(cons==1 && steag==1)
        printf("DA");
    else
        printf("NU");
    return 0;
}
