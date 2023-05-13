#include <cstdio>
#include <cstring>
using namespace std;
const int NMAX=500*501/2,LMAX=500;
int a[LMAX+5][LMAX+5],v2[NMAX+5];
int main()
{
    //freopen("pir.in","r",stdin);
    //freopen("pir.out","w",stdin);
    int n,m,i,j,k;
    short dir=0;///dir=0(jos);dir=1(dreapta);dir=2(sus)
    scanf("%d",&n);
    m=n*(n+1)/2;
    k=1;
    for(i=1;i<=n;++i)
    {
        for(j=1;j<=k;++j)
            scanf("%d",&a[i][j]);
        a[i][j]=1001;
        k++;
    }
    a[n+1][1]=a[n][n+1]=1001;
    k=1;
    i=1;j=1;
    dir=0;
    while(k<=m)
    {
        if(a[i][j]==1001)
        {
            if(dir==0)
                i--,j++;
                else
            if(dir==1)
                i--,j-=2;
                else
            if(dir==2)
                i++,j++;
            dir++;
            if(dir==3)
                dir=0;
        }
        v2[k]=a[i][j];
        a[i][j]=1001;
        if(dir==0)
            i++;
        if(dir==1)
            j++;
        if(dir==2)
            {i--;
            j--;}
        k++;
    }
    for(i=1;i<=m;++i)
        printf("%d ",v2[i]);
    int s,smax;
    s=smax=v2[1];
    for(i=2; i<=m; ++i)
    {
        if(s+v2[i]>v2[i])
            s+=v2[i];
        else
        {
            s=v2[i];
        }
        if(smax<=s)
        {
            smax=s;
        }
    }
    printf("\n%d\n",smax);
    return 0;
}
