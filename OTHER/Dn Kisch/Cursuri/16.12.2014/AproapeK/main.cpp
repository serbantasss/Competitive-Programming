#include <cstdio>

using namespace std;

int main()
{
    int n,k,nr1=0,nr2=0,dif;
    scanf("%d%d",&n,&k);
    dif=n%k;
    nr1=n+(k-dif);
    nr2=n-dif;
    if(nr1-n>n-nr2)
     printf("%d",nr2);
    else
     if(nr1-n<n-nr2)
      printf("%d",nr1);
      else
      printf("%d",nr2);
    return 0;
}
