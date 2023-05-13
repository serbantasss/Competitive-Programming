#include <cstdio>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
    char s[1005];
    gets(s);
    int n=strlen(s),i,nr=0;
    for(i=0;i<n;++i)
    {
        if(isalpha(s[i]))
            nr++;
        else
        {
            if(nr>0)
                printf("%d ",nr);
            nr=0;
        }
    }
    return 0;
}
