#include <cstdio>

using namespace std;

int main()
{
    freopen("char.in","r",stdin);
    freopen("char.out","w",stdout);
    char ch;
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
      printf("litera mica");
    else
        if(ch>='A' && ch<='Z')
          printf("litera mica");
        else
          if(ch>='0' && ch<='9')
             printf("cifra");
           else
               printf("alt caracter");
    return 0;
}
