#include <cstdio>

using namespace std;
struct INTERVALE
{
  int x,y;
};
INTERVALE v[10001];
int main()
{
    freopen("1.in","r",stdin);
    freopen("1.out","w",stdout);
    int n,i,st,dr,tempx,tempy;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
      {
          scanf("%d%d",&tempx,&tempy);
          v[i].x=tempx;
          v[i].y=tempy;
      }
    st=v[1].x;dr=v[1].y;
    for(i=2;i<=n;++i)
      {
          if(st<v[i].x)st=v[i].x;
          if(dr>v[i].y)dr=v[i].y;
      }
    if(st>dr)
       printf("Multimea vida");
    else
      printf("[%d,%d]\n",st,dr);
    return 0;
}
