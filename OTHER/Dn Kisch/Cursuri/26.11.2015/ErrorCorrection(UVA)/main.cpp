#include <cstdio>

using namespace std;

const int NMAX=105;
bool a[NMAX][NMAX];

int main()
{
    ///freopen("mat.in","r",stdin);
    ///freopen("mat.out","w",stdout);
    int n,i,j,cntl,cntc,s,linie,coloana;
    scanf("%d",&n);
    while(n!=0)
    {
        for(i=1;i<=n;++i)
            for(j=1;j<=n;++j)
                scanf("%d",&a[i][j]);
        cntc=cntl=0;
        for(i=1;i<=n;++i)
        {
            s=0;
            for(j=1;j<=n;++j)
                s+=a[i][j];
            if(s%2==1)
                {
                cntl++;
                linie=i;
                }
        }
        for(j=1;j<=n;++j)
        {
            s=0;
            for(i=1;i<=n;++i)
                s+=a[i][j];
            if(s%2==1)
                {
                cntc++;
                coloana=j;
                }
        }
        if(cntc==0 && cntl==0)
            printf("OK\n");
        else
            if(cntc==1 && cntl==1)
                printf("Change bit (%d,%d)\n",linie,coloana);
            else
                printf("Corrupt\n");
        scanf("%d",&n);
    }
    return 0;
}
