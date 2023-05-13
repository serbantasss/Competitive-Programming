#include <cstdio>
using namespace std;
int s[1000001];
int main()
{
    freopen("char.in","r",stdin);
    freopen("char.out","w",stdout);
    int n,nr=0,nrmax=0,i;
    scanf("%d",&n);
    for(i=1; i<=n; ++i)
        scanf("%c",&s[i]);
    for(i=1; i<=n; ++i)
    {
        if(s[i]=='0')
            nr=nr*10+0;
        else if(s[i]=='1')
            nr=nr*10+1;
        else if(s[i]=='2')
            nr=nr*10+2;
        else if(s[i]=='3')
            nr=nr*10+3;
        else if(s[i]=='4')
            nr=nr*10+4;
        else if(s[i]=='5')
            nr=nr*10+5;
        else if(s[i]=='6')
            nr=nr*10+6;
        else if(s[i]=='7')
            nr=nr*10+7;
        else if(s[i]=='8')
            nr=nr*10+8;
        else if(s[i]=='9')
            nr=nr*10+9;
        else
            nr=0;
        if(nr>nrmax)
            nrmax=nr;
    }
    printf("%d",nr);
    return 0;
}

