#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("1.in","r",stdin);
    freopen("1.out","w",stdout);
    int t,ti;
    scanf("%d\n",&t);
    for(ti=1;ti<=t;ti++)
    {
        char s[1005];
        int k,len,ok=0,nr=0;
        scanf("%s %d\n",s,&k);
        len=strlen(s);
        for(int i=0;i<=len-k;++i)
            if(s[i]=='-')
            {
                for(int j=1;j<=k;++j)
                if(s[i+j-1]=='-')
                    s[i+j-1]='+';
                else
                    s[i+j-1]='-';
                nr++;
            }
        printf("Case #%d: ",ti);
        for(int i=0;i<len && !ok;++i)
            if(s[i]=='-')
            {
                ok=1;
            }
        if(ok==0)
            printf("%d",nr);
        else
            printf("IMPOSSIBLE");
        printf("\n");
    }
    return 0;
}
