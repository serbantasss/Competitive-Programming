#include <cstdio>
#include <cstring>
#include <cctype>

using namespace std;
int main()
{
    /**Se citesc doua siruri de max 100 de caractere si o val. k.
       Sa se concateneze la sf. sirului s1 primele k caractere din s2.
       Sa se afiseze s1 si s2.
      */
    int k,n1;
    char s1[105],s2[105];
    gets(s1);
    n1=strlen(s1);
    gets(s2);
    scanf("%d",&k);
    strncat(s1,s2,k);
    s1[n1+k]=NULL;
    printf("%s\n%s\n",s1,s2);
    return 0;
}
