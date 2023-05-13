#include <cstdio>
#include <cstring>
#include <cctype>
using namespace std;
char s1[10001],s2[10001];
int main()
{
    //freopen("nrcuv.in","r",stdin);
    //freopen("nrcuv.out","w",stdout);
    int n1,n2,i;
    gets(s1);
    gets(s2);
    if(strcmp(s1,s2)==0)
        printf("Equal");
    if(strcmp(s1,s2)<0)
        printf("s2 bigger");
    if(strcmp(s1,s2)>0)
        printf("s1 bigger");
    return 0;
}
