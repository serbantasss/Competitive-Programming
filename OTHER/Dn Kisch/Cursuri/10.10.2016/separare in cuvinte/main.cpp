#include <cstdio>
#include <cstring>
using namespace std;
char s[10010],sep[]=" ,.;?!",*p;
char smax[10010];
int main()
{
    gets(s);
    p=strtok(s,sep);
    strcpy(smax,p);
    while(p)
    {
        if(strcmp(p,smax)>0)
            strcpy(smax,p);
        p=strtok(NULL,sep);
    }
    printf("%s",smax);
    return 0;
}
