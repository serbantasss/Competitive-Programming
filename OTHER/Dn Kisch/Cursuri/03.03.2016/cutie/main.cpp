#include <cstdio>

using namespace std;
const int nmax=1000;
int a[nmax+5][nmax+5];
int main()
{
    freopen("cutie.in","r",stdin);
    freopen("cutie.out","w",stdout);
    int n,i,j,sens=1,k,ib,jb,p;
    char ch;
    scanf("%d%d\n",&n,&k);
    for(i=1; i<=n; ++i)
    {
        for(j=1; j<=n; ++j)
        {
            scanf("%c",&ch);
            if(ch=='X')
                a[i][j]=1;
            if(ch=='B')
                ib=i,jb=j;
        }
        scanf("\n");
    }
    for(i=1; i<=n; ++i)
    {
        a[i][0]=a[i][n+1]=1;
        a[0][i]=a[n+1][i]=1;
    }
    sens=1;
    for(p=1; p<=k; ++p)
    {
        scanf("%c\n",&ch);
        if(ch=='D')
            sens--;
        else
            sens++;
        if(sens==0)
            sens=4;
        if(sens==5)
            sens=1;
        if(sens==1)
            while(a[ib+1][jb]==0)
                ib++;
        if(sens==2)
            while(a[ib][jb-1]==0)
                jb--;
        if(sens==3)
            while(a[ib-1][jb]==0)
                ib--;
        if(sens==4)
            while(a[ib][jb+1]==0)
                jb++;
    }
    if(sens==1)
    {
        for(i=1; i<=n; ++i)
        {
            for(j=1; j<=n; ++j)
            {
                //printf("%d",a[i][j]);
                if(i==ib&&j==jb)
                    printf("B");
                else if(a[i][j]==1)
                    printf("X");
                else
                    printf(".");
            }
            printf("\n");
        }
    }
    if(sens==3)
    {
        for(i=n; i>=1; --i)
        {
            for(j=n; j>=1; --j)
            {
                //printf("%d",a[i][j]);
                if(i==ib&&j==jb)
                    printf("B");
                else if(a[i][j]==1)
                    printf("X");
                else
                    printf(".");
            }
            printf("\n");
        }
    }
    if(sens==2)
    {
        for(j=n; j>=1; --j)
        {
            for(i=1; i<=n; ++i)
            {
                //printf("%d",a[i][j]);
                if(i==ib&&j==jb)
                    printf("B");
                else if(a[i][j]==1)
                    printf("X");
                else
                    printf(".");
            }
            printf("\n");
        }
    }
    if(sens==4)
    {
        for(j=1; j<=n; ++j)
        {
            for(i=n; i>=1; --i)
            {
                //printf("%d",a[i][j]);
                if(i==ib&&j==jb)
                    printf("B");
                else if(a[i][j]==1)
                    printf("X");
                else
                    printf(".");
            }
            printf("\n");
        }
    }
    return 0;
}
