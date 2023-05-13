#include <cstdio>

using namespace std;
int fr[10],v[101];
int main()
{
    int n,i,nrc=0,pos=0,max=0;
    scanf("%d",&n);
    do
    {
        nrc++;
        v[nrc]=n%10;
        if(n%10>max)
            max=v[nrc],pos=nrc;
        n/=10;
    }while(n>0);
        bool sw=true;
            for(i=2;i<=nrc;++i)
                {
            if(v[i-1]>v[i] && v[i+1]<v[i])
            {
                v[i-1]=-1,sw=false;
                break;
            }
            }
            if(sw==true)
                v[pos]=-1;
            for(i=nrc;i>=1;--i)
                if(v[i]!=-1)
                  printf("%d",v[i]);

    return 0;
}
