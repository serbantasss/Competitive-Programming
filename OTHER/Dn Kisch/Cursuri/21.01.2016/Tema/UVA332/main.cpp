#include <cstdio>
#include <cstring>
using namespace std;
char s[105];
int n,k,i,x,x1,x2,y,c,j=0;
int cmmdc(int a, int b)
{
    int r;
    while (b)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}
void solve(int n,int k)
{

        if(n==k)
        {
            x=0;
            y=0;
            for(i=2; i<k; ++i)
                x=x*10+(s[i]-'0');
            for(i=1; i<=k; ++i)
                y=y*10+9;
            c=cmmdc(x,y);
            x/=c;
            y/=c;
        }
        if(k>n)
        {
            x1=0;x2=0;
            y=0;
            for(i=2; i<k; ++i)
                x1=x1*10+(s[i]-'0');
            for(i=2;i<k-n;++i)
                x2=x2*10+(s[i]-'0');
            for(i=1; i<=n; ++i)
                y=y*10+9;
            if(y==0)
                y=1;
            for(i=1;i<=k-n-2;++i)
                y=y*10;
            if(x1==x2)
                x=x1;
            else
                x=x1-x2;
            c=cmmdc(x,y);
            x/=c;
            y/=c;
        }
}
int main()
{
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
    while(scanf("\n%d",&n) && n>=0)
    {
        scanf(" %s",&s);
        k=strlen(s);
        j++;
        solve(n,k);
        printf("Case %d: %d/%d\n",j,x,y);
    }
    return 0;
}
