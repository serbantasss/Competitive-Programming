#include <cstdio>
#include <cstring>
using namespace std;
char *p,ms[260],md[260],numar[260],sep[]="+- ";
int chartoint(char *sir)
{
    int numar=0;
    for(; *sir; ++sir)
        numar=numar*10+(*sir-'0');
    return numar;
}
void rezolva(char *s,int &nr,int &nrx)
{
    char *p, cs[260];
    int semn=1,l,n,poz;
    strcpy(cs,s);
    p=strtok(cs,"+-");
    nr=0;
    nrx=0;
    while (p)
    {
        l=strlen(p);
        poz=p-cs;
        if (p[0]=='x')
            nrx+=semn;
        else if(p[l-1]=='x')
        {
            p[l-1]=NULL;
            n=chartoint(p);
            nrx=nrx+semn*n;
        }
        else
        {
            n=chartoint(p);
            nr=nr+semn*n;
        }
        if (s[poz+l]=='+')
            semn=1;
        else
            semn=-1;
        p=strtok(NULL, "+-");
    }
}
int main()
{
    freopen("ecuatii.in","r",stdin);
    freopen("ecuatii.out","w",stdout);
    int n,i,k,lib1,lib2,nrx1,nrx2,l;
    double solutie;
    bool semn;///1-minus 0-plus
    scanf("%d\n",&n);
    for(i=1; i<=n; ++i)
    {
        gets(ms);
        p=strchr(ms,'=');
        strcpy(md,p+1);
        *p=NULL;
        lib1=lib2=0;
        nrx1=nrx2=0;
        rezolva(ms,lib1,nrx1);
        rezolva(md,lib2,nrx2);
        solutie=(double)(lib2-lib1)/(nrx1-nrx2);
        if(nrx1<nrx2 || nrx2<nrx1)
            printf("%.4lf\n",solutie);
        if(nrx1==nrx2)
            if(lib1==lib2)
                printf("infinit\n");
            else
                printf("imposibil\n");
        //printf("%s %s\n",ms,md);
    }
    return 0;
}
