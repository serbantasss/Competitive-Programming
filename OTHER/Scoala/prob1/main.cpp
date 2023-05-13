#include <cstdio>

using namespace std;
int f[10];
int main()
{
    int n,i,j;
    char c;
    scanf("%d\n",&n);
    for(i=1;i<=n;++i)
    {
        scanf("%c",&c);
        f[c-'0']++;
    }
    for(i=0;i<=9;++i)
        if(f[i]%2==1)
            f[i]--;
    for(i=9;i>=0;--i)
        for(int j=1;j<=f[i]/2;++j)
            printf("%c",i+'0');
    for(i=0;i<=9;++i)
        for(int j=1;j<=f[i]/2;++j)
            printf("%c",i+'0');
    return 0;
}
