#include <cstdio>
using namespace std;
int v[1005],n;
void flip(int i,int j)
{
    while(i<j)
    {
        int aux=v[i];
        v[i]=v[j];
        v[j]=aux;
        i++,--j;
    }
}
int main()
{
    int x,y,poz,p;
    scanf("%d",&n);
    for(int i=1;i<=n;++i)
        {
        scanf("%d",&v[i]);
        if(v[i]==1)
            poz=i;
        }
    flip(1,poz);
    p=1;
    for(int i=1;i<=n;++i)
    {
        for(int j=2;j<=n;++j)
            if(v[j]==p+1)
                poz=j;
        flip(1,poz-1);
        flip(1,poz);
        p++;
    }
    flip(1,n);
    flip(1,n-1);
    flip(1,n);
    for(int i=1;i<=n;++i)
        printf("%d ",v[i]);
    return 0;
}
