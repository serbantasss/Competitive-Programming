#include <cstdio>
#include <cctype>
#include <cstring>
using namespace std;
char s[100001];
int main()
{
    freopen("Test3.in","r",stdin);
    freopen("Test3.out","w",stdout);
    gets(s);
    int n=strlen(s)-1,suma=0;
    for(int i=1;i<=n;++i)
        if(isdigit(s[i]))
    {
        int k=1,nr=s[i]-'0';
        while(isdigit(s[i+k]))
        {
            nr=nr*10+s[i+k]-'0';
            k++;
        }
        if(s[i-1]=='A')
            suma+=nr;
        if(s[i-1]=='S')
           suma-=nr;
        i+=k;
    }
printf("%d",suma);
    return 0;
}

