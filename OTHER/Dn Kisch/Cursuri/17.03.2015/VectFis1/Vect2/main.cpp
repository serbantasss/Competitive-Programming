#include <cstdio>
using namespace std;
int v[101],b[101];
int main()
{
    freopen("vect2.in","r",stdin);
    freopen("vect2.out","w",stdout);
    int n,x,i,numberOFelementDif,j;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
        scanf("%d",&v[i]);
    numberOFelementDif=0;
    for(i=1;i<=n;++i)
    {
     bool found=false;
     x=1;
     while(x<=numberOFelementDif && !found)
     {
       if(v[i]==v[x])
            found=true;
       else
        x++;
     }
     if(!found)
     {
      numberOFelementDif++;
      b[numberOFelementDif]=v[i];
     }
    }
    for(i=1;i<=numberOFelementDif;++i)

    {
        int nr=0;
        for(j=1;j<=n;++j)
            if(b[i]==v[j])
              nr++;
    printf("%d apare de %d\n",b[i],nr);
    }
    return 0;
}
