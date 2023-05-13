#include <cstdio>
#include <cstring>
using namespace std;
char m[1005][25],*p,numep[30],numarp[30];
int v[1005];
int chartoint(char *sir)
{
    int numar=0;
    for(; *sir; ++sir)
        numar=numar*10+(*sir-'0');
    return numar;
}
void sort(int nrm)
{
    bool gasit=1;
    char auxc[30];
    int auxn;
    do
    {
        gasit=false;
        for(int i=0; i<nrm-1; i++)
            if(strcmp(m[i],m[i+1])>0)
            {
                strcpy(auxc,m[i]);
                strcpy(m[i],m[i+1]);
                strcpy(m[i+1],auxc);
                auxn=v[i];
                v[i]=v[i+1];
                v[i+1]=auxn;
                gasit=true;
            }
    }while(gasit==true);
}
int main()
{
    freopen("bacan.in","r",stdin);
    freopen("bacan.out","w",stdout);
    int n,i,k,l,j,nrp;
    bool ex;
    scanf("%d\n",&n);
    k=0;///tipuri de produse
    for(i=1; i<=n; ++i)
    {
        gets(numep);
        p=strchr(numep,'*');
        strcpy(numarp,p+2);
        *(p-1)=NULL;
        nrp=chartoint(numarp);
        ex=1;
        for(j=0;j<k;++j)
            if(strcmp(m[j],numep)==0)
                {
                ex=0;
                break;
                }
        if(ex)
        {
            strcpy(m[k],numep);
            v[k]+=nrp;
            k++;
        }
        else
            v[j]+=nrp;
    }
    sort(k);///sortam
    printf("%d\n",k);
    for(j=0;j<k;++j)
            printf("%s * %d\n",m[j],v[j]);
    return 0;
}
