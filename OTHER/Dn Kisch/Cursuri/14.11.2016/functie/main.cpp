#include <cstdio>
#include <cstring>
using namespace std;
void myreplace(char *s,char *s1,char *s2)
{
    char *p,*cs;
    int l1,l2,poz,i,j;
    l1=strlen(s1);
    l2=strlen(s2);
    p=strstr(s,s1);
    while(p)
    {
        poz=p-s;
        for(i=0;i<poz;++i)
            cs[i]=s[i];
        cs[poz]=NULL;
        strcat(cs,s2);
        for(i=poz+l2,j=poz+l1;s[i]!=NULL || s[j]!=NULL;++i,++j)
            cs[i]=s[j];
        cs[i+1]=NULL;
        strcpy(s,cs);
    }
    printf("%s",s);
}
int main()
{
   myreplace("mama cojo","cojo","mancarea");
    return 0;
}
