#include <cstdio>
#include <cstring>
using namespace std;
char s[6766],a[4182],b[2585];
int main()
{
    freopen("sirul.in","r",stdin);
    freopen("sirul.out","w",stdout);
    int n,i,lung=2;
    scanf("%d",&n);
    a[0]='a';
    b[0]='b';
    strcpy(s,b);
    for(i=3;i<n;++i)
    {
        strcat(s,a);
        strcpy(a,b);
        strcpy(b,s);
    }
    strcat(s,a);
    printf("%s\n",s);
    return 0;
}
