#include <cstdio>
#include <cstring>
#include <cctype>
using namespace std;
char s1[31],s2[31];
int main()
{
    /**Se citesc doua cuvinte formate din maxim 30 de caractere
       Sa se afiseze cuvantul cel mai mic in ordine lexicografica.*/
    int i,n1,n2,rez;
    gets(s1);
    n1=strlen(s1);
    gets(s2);
    n2=strlen(s2);
    rez=stricmp(s1,s2);
    if(rez==0)
        printf("%s\n",s1);
    else
        if(rez>0)
            printf("%s\n",s2);
        else
             printf("%s\n",s1);
    return 0;
}
