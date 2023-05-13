#include <cstdio>

using namespace std;
int v[101];
int main()
{
    freopen("vect3.in","r",stdin);
    freopen("vect3.out","w",stdout);
    int n,i,a,b,c;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
        scanf("%d",&v[i]);
    if(n==1 || n==2)
       printf("NU");
    else
    {
        a=v[1];
        b=v[2];
        int l=3;
        bool p=1,ok=true;
        while(l<=n)
        {
            c=v[l];
            if(a>b && p==true)
            {
                ok=false;
                break;
            }
            else
              if(a<b && b>c)
                  p=false;
              else
                if(c>b && p==false)
              {
                  ok=false;
                  break;
              }
              a=b;
              b=c;
              l++;
        }
        if(ok==true)
            printf("DA");
        else
            printf("NU");
    }
    return 0;
}
