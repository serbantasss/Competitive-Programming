#include <cstdio>
#include <cstring>
#include <cctype>

using namespace std;
int main()
{
    /**ABCDEF       ABCDEFMNPU
               =>
       MNPU         MN
                    MNMNPU
      */
    int i,n1,n2;
    char s1[55],s2[55];
    gets(s1);
    n1=strlen(s1);
    gets(s2);
    n2=strlen(s2);
    strncat(s1,s2,3);
    s1[n1+3]=NULL;
    printf("%s\n",s1);
    strncpy(s1,s2,2);
    s1[2]=NULL;
    printf("%s\n",s1);
    strcat(s1,s2);
    printf("%s\n",s1);
    return 0;
}
