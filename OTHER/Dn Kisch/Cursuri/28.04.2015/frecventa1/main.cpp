#include <cstdio>
#include <windows.h>
using namespace std;
int f[10];
int main()
{
    system("TITLE frecventa1");
    system("color 09");
    int n,i,nr=0;
    scanf("%d",&n);
    {
    do
    {
        f[n%10]++;
        n/=10;
    }while(n);
    }

    ///1)Sa se afiseze care cifre apar
    ///  in scrierea lui n
    printf("1)\n");
    for(i=0;i<=9;++i)
        if(f[i])
           {printf("%d ",i);}
    printf("\n\n");

    /**2)SA se afiseze cate cifre lipsesc din scrierea
    lui m*/
    printf("2)\n");
    for(i=0;i<=9;++i)
        if(f[i]==0)
           nr++;
    printf("%d",nr);
    printf("\n\n");

    /**Sa se afiseze cifrele pare care apar in scrierea
      lui n.Daca nu apare nici una sa se scrie "DASANT EXIST"\
      */
    printf("3)\n");
    nr=0;
    for(i=0;i<=9;++i)
        if(f[i] && i%2==0)
          nr++;
    if(nr==0)
        printf("DASANT EGZIST NUMBARS PAR\n\n");
    else
        printf("%d\n\n",nr);

    printf("4)\n");
    for(i=0;i<=9;++i)
      if(f[i]>1)
         printf("%d ",i);
    printf("\n\n");

    return 0;
}
