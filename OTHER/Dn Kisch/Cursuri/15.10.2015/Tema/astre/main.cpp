#include <cstdio>
#include <cstring>
#include <cctype>
using namespace std;
const int NMAX=100;
char a[NMAX+5][NMAX+5],s[NMAX+5],sir1[2*NMAX+5],sir2[2*NMAX+5];
int main()
{
    freopen("astre.in","r",stdin);
    freopen("astre.out","w",stdout);
    int n,i=4,sortat=1;
    n=0;
    while(gets(s))
    {
        ++n;
        strcpy(a[n],s);
    }
    do
    {
        sortat=1;
        for(i=1;i<n;++i)
        {
            strcpy(sir1,a[i]);strcpy(sir2,a[i+1]);
            strcat(sir1,a[i+1]);strcat(sir2,a[i]);
            if(strcmp(sir1,sir2)<0)
            {
                strcpy(s,a[i]);
                strcpy(a[i],a[i+1]);
                strcpy(a[i+1],s);
                sortat=0;
            }
        }
    }while(sortat==0);
    for(i=1;i<=n;++i)
        printf("%s",a[i]);
    return 0;
}
