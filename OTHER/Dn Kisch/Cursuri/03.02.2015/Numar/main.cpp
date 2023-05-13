#include <cstdio>
using namespace std;
int main()
{
    freopen("numar.in","r",stdin);
    freopen("numar.out","w",stdout);
    int n,k,inceput=1,sfarsit=1;
    scanf("%d %d",&k,&n);
    for(int i=1;i<=k-1;++i)
        sfarsit*=10;
    sfarsit=sfarsit*10-1;
    for(int i=1; i<=k-1; ++i)
        inceput=inceput*10+1;
    for(int x=inceput; x<=sfarsit; ++x)
    {
        int suma=0,copie=x,ok=1;
        do
        {
            if(copie%10==0)
                {ok=0;break;}
            suma+=copie;
            copie/=10;
        }
        while(copie);
        if(ok)
            if(suma==n)
                {printf("%d",x);
                break;}
    }
    return 0;
}
