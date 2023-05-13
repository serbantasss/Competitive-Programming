#include <cstdio>

using namespace std;
int v[15];
int main()
{
    freopen("speciale.in","r",stdin);
    freopen("speciale.out","w",stdout);
    int n,p,a,b,k;
    scanf("%d%d%d%d%d",&p,&k,&n,&a,&b);;
    if(p==1)
    {
        a=9;
        for(int i=1;i<=k;i++)
            printf("%d",a),--a;
    }
    if(p==2){
        int i=1,j,cp=n;
        do
            {
            v[i]=cp%10;
            ++i;
            cp/=10;
            }
        while(cp>0);
        cp=i-1;int sw=1;
        for(i=1;i<=cp;++i)
        {
            int nr=0;
            for(j=cp;j>=i+1;--j)
                nr=nr*10+v[j];
            for(j=i-1;j>=1;--j)
                nr=nr*10+v[j];
            if(nr==1 || nr==12 || nr==123 || nr==1234 || nr==12345 || nr==123456 || nr==1234567 || nr==12345678 || nr==123456789 ||nr==9 || b==98 || nr==987 || nr==9876 || nr==98765 || nr==987654 || nr==9876543 || nr==98765432)
            {
                printf("%d",nr);
                sw=0;
                break;
            }
        }
        if(sw)
           printf("0");
    }
    if(p==3)
    {
       int nr=1,uc;
       int hf=0;
       while(nr<=b)
       {
           if(nr>=a && nr<=b)
            hf++;
          uc=nr%10;
          nr=nr*10+(uc+1);
       }
       nr=9;
       while(nr<=b)
       {
           if(nr>=a && nr<=b)
            hf++;
          uc=nr%10;
          nr=nr*10+(uc-1);
       }
       printf("%d",hf);
    }
    return 0;
}
