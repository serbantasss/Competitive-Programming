#include <cstdio>

using namespace std;
int fr[10],v[101];
int main()
{
    freopen("nrurias.in","r",stdin);
    freopen("nrurias.out","w",stdout);
    int n,i,s=0,max=0,min=10,pos=0;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        scanf("%d",&v[i]);
        fr[v[i]]++;
        s+=v[i];
        if(v[i]<min)
            min=v[i],pos=i;
    }
    if(s%9==0){
    for(i=0;i<=9;++i)
        if(max<=fr[i])
         max=fr[i];
    for(i=0;i<=9;++i)
        if(max==fr[i])
            printf("%d ",i);
    }
    else
    {
        if(n==1)
            printf("IMPOSIBIL\n");
        else
        {
            bool sw=true;
            for(i=2;i<=n;++i)
                {
            if(v[i-1]>v[i] && v[i+1]>v[i])
            {
                v[i]=-1,sw=false;
                break;
            }
            }
            if(sw==true)
                v[pos]=-1;
            for(i=1;i<=n;++i)
                if(v[i]!=-1)
                  printf("%d",v[i]);
        }
    }
    return 0;
}
