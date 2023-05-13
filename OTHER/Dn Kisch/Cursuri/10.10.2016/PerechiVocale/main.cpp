#include <cstdio>
#include <cstring>
#include <cctype>
using namespace std;
char s[255],voc[]="aeiouAEIOU";
int main()
{
    //freopen("vocmax.in","r",stdin);
    //freopen("vocmax.out","w",stdout);
    int n,i,nr=0;
    gets(s);
    n=strlen(s);
    for(i=0; i<n-1; i++)
    {
        if(strchr(voc,s[i]) && strchr(voc,s[i+1]))
            nr++;
    }
    printf("%d",nr);
    return 0;
}
