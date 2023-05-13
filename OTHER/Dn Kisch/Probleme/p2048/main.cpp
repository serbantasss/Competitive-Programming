#include <cstdio>
using namespace std;

int p[10001];

int main()
{
    freopen("p2048.in","r",stdin);
    freopen("p2048.out","w",stdout);
    int n,m,k,i,ii,nrfuz,x,y,z,j,in,sf,mutat,gata,P;
    char d,ud;
    scanf("%d%d",&n,&m);
    k=i=ii=nrfuz=x=y=z=j=in=sf=mutat=gata=P=0;
    for(i=1; i<=n; i++)
    {
        scanf("%d",&p[i]);
        if(p[i]==2048)
        {
            gata=1;
            y=2048;
        }
    }
    in=1;
    sf=n;
    for(i=1; i<=m && !gata; i++)
    {
        scanf("%c",&d);
        nrfuz=0;
        mutat=0;
        if(d=='D')
        {
            for(j=sf; j>in; j--)
                if(p[j]==p[j-1])
                {
                    nrfuz++;
                    mutat=1;
                    if(P>=in && P<=j-1)P++;
                    p[j]*=2;
                    for(k=j-1; k>in; k--)p[k]=p[k-1];
                    in++;
                }
        }
        else
        {
            for(j=in; j<sf; j++)
                if(p[j]==p[j+1])
                {
                    nrfuz++;
                    mutat=1;
                    if(P<=sf && P>=j+1)P--;
                    p[j]*=2;
                    for(k=j+1; k<sf; k++)p[k]=p[k+1];
                    sf--;
                }
        }
        if(nrfuz>z)z=nrfuz;
        if(!mutat)gata=1;
        else ud=d,x++;
        for(ii=in; ii<=sf; ii++)
            if(p[ii]>y)y=p[ii];
        if(y==2048)gata=1;
    }

    if(ud=='D')P=P+n-sf;
    else P=P-(in-1);
    printf("%d\n%d\n%d\n",x,y,z);
    return 0;
}
