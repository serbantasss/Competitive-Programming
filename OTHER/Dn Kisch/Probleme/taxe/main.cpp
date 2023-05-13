#include <cstdio>

using namespace std;

int main()
{
    freopen("taxe.in","r",stdin);
    freopen("taxe.out","w",stdout);
    int n,i,s,st,dr;
    long long med,t,cmed;
    scanf("%d",&s);
    s/=4;
    st=1;
    dr=s;
    while(st<=dr)
    {
        med=(dr+st)/2;
        cmed=med;
        t=0;
        while(med)
        {
         t+=med;
         med/=4;
        }
        if(t==s)
        {
            printf("%d\n",cmed);
            return 0;
        }
        if(t<s)
            st=cmed+1;
        else
            dr=cmed-1;
    }
    printf("%d",med);
    return 0;
}
