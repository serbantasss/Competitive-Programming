#include <cstdio>

using namespace std;
int fr[10],v[101];
int main()
{
    int n,i,nrc=0,pos=0,min=10;
    char c;
    while(c!='\n')
    {
        scanf("%c",&c);
        if(c=='\n')
            break;
        v[++nrc]=c-'0';
        if(c-'0'<min)
            min=c-'0',pos=nrc;
    }
        bool sw=true;
            for(i=2;i<=nrc;++i)
                {
            if(v[i-1]>v[i] && v[i+1]>v[i])
            {
                v[i]=-1,sw=false;
                break;
            }
            }
            if(sw==true)
                v[pos]=-1;
            for(i=1;i<=nrc;++i)
                if(v[i]!=-1)
                  printf("%d",v[i]);

    return 0;
}
