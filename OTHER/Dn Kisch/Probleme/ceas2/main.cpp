#include <cstdio>

using namespace std;
char mat[10][10];
int h,m,s,ms;
int main()
{
    freopen("ceas2.in","r",stdin);
    freopen("ceas2.out","w",stdout);
    int nr=0,i,j,t;
    char ch;
    for(i=1;i<=4;++i)
        {
        for(j=1;j<=8;++j)
             scanf("%c",&mat[i][j]);
        ch=getc(stdin);
        }
    scanf("%d",&t);
    for(i=1;i<=8;++i)
    {
        int n=0,p=1;
        for(j=4;j>=1;--j)
            {
            if(mat[j][i]=='o')
               n+=p;
            if(mat[j][i]!=' ')
                p*=2;
            }
       nr=nr*10+n;
    }
    ms=nr%100;nr/=100;
    s=nr%100;nr/=100;
    m=nr%100;nr/=100;
    h=nr%100;nr/=100;
    nr=0;
    ms+=t;
    if(ms>=100)
        s=s+ms/100,ms=ms%100;
    if(s>=60)
        m=m+s/60,s=s%60;
    if(m>=60)
        h=h+m/60,m=m%60;

    return 0;
}
