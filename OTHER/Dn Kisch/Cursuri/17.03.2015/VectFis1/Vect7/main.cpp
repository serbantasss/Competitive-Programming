#include <cstdio>
#include <cmath>
using namespace std;
int pare[101],impare[101];
bool verif(int n)
{
  return n%2;
}
int main()
{
    freopen("vect7.in","r",stdin);
    freopen("vect7.out","w",stdout);
    int n,i,x,im,pa;
    scanf("%d",&n);im=pa=0;
    for(i=1;i<=n;++i)
        {
        scanf("%d",&x);
        bool nr;
        nr=verif(x);
        if(nr==true)
        {
            pa++;
            pare[pa]=x;
        }
        else
        {
            im++;
            impare[im]=x;
        }
        }
    for(i=1;i<=pa;++i)
        printf("%d ",pare[i]);
    printf("\n");
    for(i=1;i<=im;++i)
        printf("%d ",impare[i]);
    return 0;
}
