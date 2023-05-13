#include <cstdio>
using namespace std;
int matrice[100][100];
int nr_sa(int a[100][100],int n,int m)
{
    int i,j,nr=0,mi,ma;
    short int ajutor[100][100],ajutor2[100][100];
    for(i=0; i<n; ++i)
        for(j=0; j<m; ++j)
            ajutor[i][j]=0;
    for(i=0; i<n; ++i)
    {
        mi=a[i][0];
        for(j=1; j<m; ++j)
            if(mi>a[i][j])
                mi=a[i][j];
        for(j=0; j<m; ++j)
            if(a[i][j]==mi)
                ajutor[i][j]++;
    }
    for(j=0; j<m; ++j)
    {
        ma=a[0][j];
        for(i=1; i<n; ++i)
            if(ma<a[i][j])
                ma=a[i][j];
        for(i=0; i<m; ++i)
            if(a[i][j]==ma)
                ajutor[i][j]++;
    }
    for(i=0; i<n; ++i)
        for(j=0; j<m; ++j)
            if(ajutor[i][j]==2)
                nr++;
    ///
    for(i=0; i<n; ++i)
    {
        ma=a[i][0];
        for(j=1; j<m; ++j)
            if(ma<a[i][j])
                ma=a[i][j];
        for(j=0; j<m; ++j)
            if(a[i][j]==ma)
                ajutor2[i][j]++;
    }
    for(j=0; j<m; ++j)
    {
        mi=a[0][j];
        for(i=1; i<n; ++i)
            if(mi>a[i][j])
                mi=a[i][j];
        for(i=0; i<m; ++i)
            if(a[i][j]==mi)
                ajutor2[i][j]++;
    }
    for(i=0; i<n; ++i)
        for(j=0; j<m; ++j)
            if(ajutor2[i][j]==2 && ajutor[i][j]!=2)
                nr++;
    return nr;
}
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=0; i<n; ++i)
        for(int j=0; j<m; ++j)
            scanf("%d",&matrice[i][j]);
    printf("%d",nr_sa(matrice,n,m));
    return 0;
}
