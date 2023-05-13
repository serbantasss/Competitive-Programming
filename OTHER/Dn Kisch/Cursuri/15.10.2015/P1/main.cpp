#include <cstdio>
#include <cstring>
#include <cctype>

using namespace std;
char s[55];
int main()
{
    /**Se citeste un sir format din maxim
       50 caractere; sirul nu contine spatii
    a)Sa se afiseze cate litere si cate cifre
      contine.
    b)Sa se transforme toate litere
      mici din sir in litere mari
      */
    int i,n,nrc=0,nrl=0;
    gets(s);
    n=strlen(s);
    ///a)
    for(i=0;i<n;++i)
    {
        if(isalpha(s[i]))
            nrl++;
        if(isdigit(s[i]))
            nrc++;
    }
    printf("%d litere\n%d cifre\n",nrl,nrc);
    ///b)
    for(i=0;i<n;++i)
        printf("%c",toupper(s[i]));
    return 0;
}
