#include <cstdio>

using namespace std;
bool palimdromVERIF(int n)
{
    int nr=0,cn=n;
    do
    {
      nr=nr*10+n%10;
      n/=10;
    }while(n);
       return cn==nr;
}
int main()
{
    int n,m,i;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;++i)
    {
        if(palimdromVERIF(i) && palimdromVERIF(i*i))
            printf("%d ",i);
    }
    return 0;
}
