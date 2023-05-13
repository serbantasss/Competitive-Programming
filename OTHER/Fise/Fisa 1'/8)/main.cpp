#include <cstdio>

using namespace std;
int v[100001];
int main()
{
    int n,periodic=0,k=1,i;
    scanf("%d",&n);
    v[k]=n;
    printf("%d",n);
    bool steag=true;
    do
    {
        steag=true;
        int cn=n,s=0;
        do
        {
            s=s+(cn%10)*(cn%10)*(cn%10);
            cn/=10;
        }
        while(cn);
        for(i=1; i<=k; ++i)
            if(s==v[i])
                steag=false;
        if(steag==true)
        {
            v[++k]=s;
            n=s;
            printf("%d ",n);
        }
        else
        {
            printf("%d",s);
            break;
        }
    }
    while(steag==true);
    return 0;
}
