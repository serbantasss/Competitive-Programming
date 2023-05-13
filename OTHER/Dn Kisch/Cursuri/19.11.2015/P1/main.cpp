#include <cstdio>
#include <cstring>
#include <cctype>

using namespace std;
char s[100005],*p,voc[]="aeiouAEIOU",sep[]=" ,;!";
int main()
{
    int kmax,i,k,nrvoc,nr=0;
    bool ok=true;
    gets(s);
    kmax=0;
    p=strtok(s,sep);
    while(p)
    {
        k=strlen(p);
        if(k>kmax)
            kmax=k;
        nrvoc=0;
        ok=true;
        for(i=0; i<k; ++i)
        {
            if(strchr(voc,p[i]))
                nrvoc++;
            if(nrvoc>3)
            {
                ok=false;
                break;
            }
        }
        if(ok==true && nrvoc==3)
            nr++;
        p=strtok(NULL,sep);
    }
    printf("%d\n%d",kmax,nr);
    return 0;
}
