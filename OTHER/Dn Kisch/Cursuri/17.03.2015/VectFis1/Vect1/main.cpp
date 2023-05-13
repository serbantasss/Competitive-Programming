#include <cstdio>

using namespace std;
int v[101],b[101];
int main()
{
    freopen("v1.in","r",stdin);
    freopen("v1.out","w",stdout);
    int n,x,i,numberOFelementDif;
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
        printf("%d ",b[i]);
    return 0;
}
