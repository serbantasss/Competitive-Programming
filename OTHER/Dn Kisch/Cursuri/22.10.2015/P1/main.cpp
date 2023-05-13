#include <cstdio>
#include <cstring>
using namespace std;
char s[10001],ch,*p;
int main()
{
    /**
       Se citeste un sir de lit mari sau mici,maxim 10000 de caractere
    Sa se afiseze cate vocale sunt in sir.
    */
    int n,i,nr;
    gets(s);
    scanf("%c",&ch);
    n=strlen(s);
    for(i=0;i<=n;++i)
    {
        p=strchr("aeiouAEIOU",s[i]);
        if(p)
            nr++;
    }
    printf("%d",nr);
    return 0;
}
