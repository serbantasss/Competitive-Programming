#include <cstdio>

using namespace std;
int v[101];
int nr;
int main()
{
    freopen("vect5.in","r",stdin);
    freopen("vect5.out","w",stdout);
    int n,i,a,b,c;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
        scanf("%d",&v[i]);
    if(n==1)
        printf("DA");
    else
    {
        int st,dr,x,lungime=0;
        st=1;
        dr=2;
        x=v[st];
        nr=0;
        for(st=1,dr=2;dr<=n+1;++dr)
        {
            if(x<v[dr])
            {
                x=v[dr];
            }
            else
            {
                nr++;
                st=dr;
                x=v[st];
            }
        }
    printf("%d",nr);
    }
    return 0;
}
