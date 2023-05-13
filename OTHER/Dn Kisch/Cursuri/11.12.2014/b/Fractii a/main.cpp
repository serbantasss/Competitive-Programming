#include <cstdio>

using namespace std;
struct FRACTIE
{
  int a,b;
};
int cmmdc(int a,int b)
{
    int r;
    while(b>0)
      {
       r=a%b;
       a=b;
       b=r;
      }
    return a;
}
int main()
{
    FRACTIE f1,f2,f3;
    freopen("1.in","r",stdin);
    freopen("1.out","w",stdout);
    int numarator,numitor,cm;
    scanf("%d%d",&numarator,&numitor);
    f1.a=numarator;f1.b=numitor;
    scanf("%d%d",&numarator,&numitor);
    f2.a=numarator;f2.b=numitor;
    cm=cmmdc(f1.a,f1.b);
    f1.a=f1.a/cm;
    f1.b=f1.b/cm;
    cm=cmmdc(f2.a,f2.b);
    f2.a=f2.a/cm;
    f2.b=f2.b/cm;
    printf("%d|%d\n",f1.a,f1.b);
    printf("%d|%d\n",f2.a,f2.b);
    ///f3=f1*f2
    f3.a=f1.a*f2.a;
    f3.b=f1.b*f2.b;
    cm=cmmdc(f3.a,f3.b);
    f3.a=f3.a/cm;
    f3.b=f3.b/cm;
    printf("%d|%d\n",f3.a,f3.b);
    ///f3=f1+f2
    f3.a=f1.a*f2.b+f1.b*f2.a;
    f3.b=f2.b*f1.b;
    cm=cmmdc(f3.a,f3.b);
    f3.a=f3.a/cm;
    f3.b=f3.b/cm;
    printf("%d|%d\n",f3.a,f3.b);
    ///f3=f1-f2
    f3.a=f1.a*f2.b-f1.b*f2.a;
    f3.b=f2.b*f1.b;
    cm=cmmdc(f3.a,f3.b);
    f3.a=f3.a/cm;
    f3.b=f3.b/cm;
    printf("%d|%d\n",f3.a,f3.b);
    return 0;
}
