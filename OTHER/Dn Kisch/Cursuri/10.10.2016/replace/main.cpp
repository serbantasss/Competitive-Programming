#include <cstdio>
#include <cstring>
using namespace std;
char str[30001],m[20][81],s[100];
int l;
void inloc (char di[],char in[])
{
    char *pch;
    int ldi,lin,j,i;
    pch = strstr(str,di);///unde se afla di in str
    ///inlocurie
    strcpy(di," ");
    ldi=strlen(di);
    lin=strlen(in);
    while(pch)
    {
        if(ldi==lin)///au aceeasi lung "este "cu "esti"
            strncpy (pch,in,lin);
        else
        {
            if(ldi<lin)///joi cu vineri(3<6)
            {
                for(j=1; j<=lin-ldi; j++)
                {
                    for(i=l+1; i>pch-str; i--)
                        str[i]=str[i-1];
                    l++;
                }
                strncpy (pch,in,lin);
            }
            else///cacat cu caca(3<6)
            {
                {
                    for(j=1; j<=ldi-lin; j++)
                    {
                        strcpy(str,str+1);
                    }
                    strncpy (pch,in,lin);
                }
            }
        }
        pch=strstr(pch+1,di);///continui sa caut in sir pe di
    }
}
int main()
{
    freopen("replace.in","r",stdin);
    freopen("replace.out","w",stdout);
    int n,i,j;
    scanf("%d\n",&n);
    for(i=0; i<n; ++i)
    {
        gets(m[i]);
        gets(m[i+n]);
    }
    gets(str);
    l=strlen(str);
    for(i=n-1;i<n;i++)
    {
        inloc(m[i],m[i+n]);
    }
    puts(str);
    return 0;
}
