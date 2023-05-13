#include <cstdio>

using namespace std;
struct INTERVALE
{
    int x,y;
};
int main()
{
    freopen("1.in","r",stdin);
    freopen("1.out","w",stdout);
    INTERVALE a,b;
    int tempx,tempy,min,max,max1,min1;
    scanf("%d%d",&tempx,&tempy);
    a.x=tempx;a.y=tempy;
    scanf("%d%d",&tempx,&tempy);
    b.x=tempx;b.y=tempy;
    ///reuniunie
    max=a.x;
    if(b.x>max)
      max=b.x;
    min=a.y;
    if(b.y<min)
       min=b.y;
    if(max>min)
      printf("[%d,%d]U[%d,%d]\n",a.x,a.y,b.x,b.y);
    else
      {
          if(a.y>b.y)
            max1=a.y;
          else
            max1=b.y;
          if(a.x<b.x)
            min1=a.x;
          else
            min1=b.x;
          printf("[%d,%d]\n",min1,max1);
      }
    ///intersectie
    if(max>min)
      printf("Multimea vida\n");
    else
       printf("[%d,%d]\n",max,min);
    return 0;
}
