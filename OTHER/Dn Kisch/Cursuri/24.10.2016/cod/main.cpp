#include <cstdio>
#include <cstring>
using namespace std;
char s[85],siruri[51][85],con[85],ty[85];
int transf(int dif)
{
    if(dif==3)
        return 26;
    if(dif==4)
        return 25;
    if(dif==5)
        return 24;
    if(dif==6)
        return 23;
    if(dif==7)
        return 22;
    if(dif==8)
        return 21;
    if(dif==9)
        return 20;
    if(dif==10)
        return 19;
    if(dif==11)
        return 18;
    if(dif==12)
        return 17;
    if(dif==13)
        return 16;
    if(dif==14)
        return 15;
    if(dif==15)
        return 14;
    if(dif==16)
        return 13;
    if(dif==17)
        return 12;
    if(dif==18)
        return 11;
    if(dif==19)
        return 10;
    if(dif==20)
        return 9;
    if(dif==21)
        return 8;
    if(dif==22)
        return 7;
    if(dif==23)
        return 6;
    if(dif==24)
        return 5;
    if(dif==25)
        return 4;
    if(dif==26)
        return 3;
}
int main()
{
    freopen("cod.in","r",stdin);
    freopen("cod.out","w",stdout);
    int n,i,j,k,l,dif,nrc=0,sep,p,o,max=-1;
    ///97 pt 'a'
    while(gets(s))
    {
        l=strlen(s);
        k=0;
        j=0;
        if(l>max)
            max=l;
        for(i=0; i<l; ++i)
        {
            if(s[i]=='a' || s[i]=='b')
            {
                if(s[i]=='a')
                    sep=1;///punct
                else
                    sep=0;///spatiu
                p=k-1;
                o=j;
                for(int ii=o; ii<o+k; ii++)
                {
                    ty[j++]=con[p];
                    p--;
                }
                if(sep==1)
                    ty[j++]='.';
                else
                    ty[j++]=' ';
                k=0;
            }
            else
            {
                if(s[i]=='.')
                {
                    con[k++]='a';
                    continue;
                }
                if(s[i]==' ')
                {
                    con[k++]='b';
                    continue;
                }
                dif=s[i]-'a'+1;
                con[k++]='a'+transf(dif)-1;
            }
        }
        if(k>0)
        {
            if(s[i]=='a')
                    sep=1;///punct
                else
                    sep=0;///spatiu
                p=k-1;
                o=j;
                for(int ii=o; ii<o+k; ii++)
                {
                    ty[j++]=con[p];
                    p--;
                }
                if(sep==1)
                    ty[j++]='.';
                else
                    ty[j++]=' ';
                k=0;
        }
        ty[j+1]=NULL;
        strcpy(siruri[++nrc],ty);
    }
    printf("%d\n%d\n",nrc,max);
    for(i=1;i<=nrc;++i)
        printf("%s\n",siruri[i]);
    return 0;
}
