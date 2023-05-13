#include <cstdio>
#define NUM v[i]
using namespace std;
int n,k,v[1000001];
int main()
{
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;++i)
        scanf("%d",&NUM);
    int dr,s,st,min=n+1;
    ///for-ul pt secventa cu suma >=k
    for(st=dr=1,s=0;dr<=n;++dr)
    {
        s=s+v[dr];
        while(s>=k)
        {
            if(dr-st+1<min)
                min=dr-st+1;
            s=s-v[st];
            st++;
        }
    }///for
    if(min==n+1)
        printf("-1\n");
    else
        printf("%d",min);

    return 0;
}
