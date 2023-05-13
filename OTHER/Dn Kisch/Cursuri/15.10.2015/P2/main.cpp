#include <cstdio>
#include <cstring>
#include <cctype>
using namespace std;
char s[105];
int main(){
    /**Se citeste un sir din maxim
       101 caractere;Sa se inlocuiasca
       toate vocalele mici in vocale mari
      */
    int n,i;
    gets(s);
    n=strlen(s);
    for(i=0;i<n;++i)
        if(strchr("aeiou",s[i]))
            s[i]=toupper(s[i]);
    printf("%s\n",s);
    return 0;
}
