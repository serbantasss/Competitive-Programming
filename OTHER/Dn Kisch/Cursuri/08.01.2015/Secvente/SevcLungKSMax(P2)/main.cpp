#include <cstdio>
#define NUM v[i]
using namespace std;
int n,k,v[1000001];
int main()
{
    int dr,s=0,st,max=0;
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;++i)
        {
            scanf("%d",&NUM);
            if(i<=k)
                s+=NUM;
        }
    max=s;
    for(st=2,dr=st+k-1;st<=n-k+1;++st,++dr)
    {
        s=s-v[st-1]+v[dr];
        if(s>max)
            max=s;
    }
    printf("%d",max);
    return 0;
}
