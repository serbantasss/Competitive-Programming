#include <cstdio>
#include <cstring>
#include <cctype>
using namespace std;
const int NMAX=255;
int nrvocale(char *s)
{
    char *p;
    p=s;
    int nr=0;
    for(;*p;p++)
        if(strchr("aeiou",*p))
            nr++;
    return nr;
}
int main()
{
    freopen("vocale.in","r",stdin);
    freopen("vocale.out","w",stdout);
    int n,i,j,lmin,voc,nv,sol=1,k;
    char s[NMAX+5],m[NMAX+5][NMAX+5],*p;
    scanf("%d\n",&n);
    for(j=0; j<n; ++j)
    {
        gets(s);
        p=strtok(s," ");
        lmin=260;
        k=0;
        while(p)
        {
            voc=nrvocale(p);
            if(voc<lmin)
            {
                lmin=voc;
                k=1;
                strcpy(m[k],p);
            }
            if(voc==lmin)
            {
                bool ex=1;
                for(i=1;i<=k;++i)
                    if(strcmp(m[i],p)==0)
                     {
                         ex=0;
                         break;}
                if(ex)
                    strcpy(m[++k],p);
            }
            p=strtok(NULL," ");
        }
        sol=(sol*k)%2003;
        if(j>0)
            printf(" ");
        printf("%s",m[1]);
    }
    printf("\n%d\n",sol);
    return 0;
}
