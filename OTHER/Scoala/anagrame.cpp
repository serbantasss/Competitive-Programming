#include <cstdio>
#include <cstring>
#include <ctime>
using namespace std;
int v[50005][30],f[30];
char s[50];
int main()
{
    freopen("1.in","r",stdin);
    freopen("1.out","w",stdout);
    int n,k,i,ii,j;
    scanf("%d\n",&n);
    gets(s);
    k=strlen(s);
    for(j=0;j<k;++j)
        v[1][s[j]-'a'+1]++;
    v[1][0]++;
    for(i=2;i<=n;++i)
    {
        gets(s);
        k=strlen(s);
        memset(f,0,sizeof(f));
        for(j=0;j<k;++j)
            f[s[j]-'a'+1]++;
        bool steag=1;
        for(ii=1;ii<i;++ii)
            {
                bool ok=1;
                for(j=1;j<=26;++j)
                    if(v[ii][j]!=f[j])
                    {
                        ok=0;
                        break;
                    }
                if(ok==1)
                    {
                        v[ii][0]++;
                        steag=0;
                        break;
                    }
            }
        if(steag==1)
        {
            v[i][0]++;
            for(j=1;j<=27;++j)
                v[i][j]=f[j];
        }
    }
    int max=0;
    for(i=1;i<=n;++i)
    {
       if(max<v[i][0])
        max=v[i][0];
    }
    printf("%d",max);
    return 0;
}
