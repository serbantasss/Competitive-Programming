#include <cstdio>

using namespace std;
int v[100001];
int main()
{
    //freopen("n311.in","r",stdin);
    //freopen("n311.out","w",stdout);
    int n,cn,nrop=0;
    scanf("%d",&n);
    cn=n;
    while(n>1)
    {
        if(n%3==0)
        {
            n/=3;
            v[++nrop]=3;
        }
        else
            if(n%3==1)
        {
            ++n;
            v[++nrop]=1;
        }
        else
        {
            n--;
            v[++nrop]=-1;
        }
    }
    for(int i=nrop;i>=1;--i)
        printf("%d ",v[i]);
    return 0;
}
