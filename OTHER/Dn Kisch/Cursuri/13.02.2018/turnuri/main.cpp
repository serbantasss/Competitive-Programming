#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
int v[1000005];
int main()
{
    freopen("turnuri.in","r",stdin);
    freopen("turnuri.out","w",stdout);
    int n,i,j,k,t;
    scanf("%d",&t);
    for(; t; t--)
    {
        scanf("%d",&n);
        for(i=1; i<=n; ++i)
            scanf("%d",&v[i]);
        sort(v+1,v+n+1);
        int l=1,lmax=0,max=0;
        for(i=2; i<=n; ++i)
        {
            if(v[i]==v[i-1])
            {
                l++;
            }
            else
            {
                if(lmax<l)
                {
                    lmax=l;
                    max=v[i-1];
                }
                else if(lmax==l && max<v[i-1])
                    max=v[i-1];
                l=1;
            }
        }
        if(lmax<l)
        {
            lmax=l;
            max=v[i-1];
        }
        else if(lmax==l && max<v[i-1])
            max=v[i-1];
        if(lmax>n/2+1)
            printf("DA\n");
        else if(lmax<n/2+1)
            printf("NU\n");
        else
        {
            int small=0,big=0;
            for(i=1; i<=n; ++i)
            {
                if(v[i]<max)
                    small++;
                if(v[i]>max)
                    big++;
            }
            if(n%2==1 && (small==0 || big==0))
                printf("DA\n");
            else
                printf("NU\n");
        }
        memset(v,0,sizeof(v));
    }
    return 0;
}
