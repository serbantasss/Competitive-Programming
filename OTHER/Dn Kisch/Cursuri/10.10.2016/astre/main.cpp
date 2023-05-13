#include <cstdio>
#include <cstring>

using namespace std;
char m[105][105],aux[105],s1[210],s2[210];
int main()
{
    freopen("astre.in","r",stdin);
    freopen("astre.out","w",stdout);
    int n,i,ok=0;
    n=0;
    while(gets(m[++n]));
    strcpy(aux,"");
    do
    {
        ok=1;
        for(i=1; i<n; ++i)
        {
            strcpy(s1,m[i]);
            strcat(s1,m[i+1]);
            strcpy(s2,m[i+1]);
            strcat(s2,m[i]);
            if(strcmp(s1,s2)<0)
            {
                strcpy(aux,m[i]);
                strcpy(m[i],m[i+1]);
                strcpy(m[i+1],aux);
                ok=0;
            }
        }
    }
    while(!ok);
    for(i=1; i<=n; ++i)
        printf("%s",m[i]);
    return 0;
}
