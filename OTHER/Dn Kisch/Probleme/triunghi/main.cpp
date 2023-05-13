#include <cstdio>
#include <cmath>
using namespace std;
const double eps=1.e-14;
struct POINT
{
  int x,y;
};
struct triunghi
{
  POINT A,B,C;
};
double aria(POINT A,POINT B,POINT C)
{
   double cp=(B.x-A.x)*(C.y-B.y)-(B.y-A.y)*(C.x-B.x);  return fabs(cp)*0.5;
}
bool interior(POINT A,POINT B,POINT C,POINT P)
{
  double s;
  s=aria(P,A,B)+aria(P,A,C)+aria(P,B,C);
  if(fabs(s-aria(A,B,C))<eps)
     return 1;
  else
      return 0;
}
triunghi v[66];
int l[66];
int main()
{
  freopen("triunghi.in","r",stdin);
  freopen("triunghi.out","w",stdout);
  int n,i,a,b,c,nr=0,imax=0;POINT K;
   double arie=0,ariemax=0;
  scanf("%d",&n);
  for(i=1;i<=n;++i)
  {
   scanf("%d%d%d",&a,&b,&c);
   v[i].A.x=a;v[i].A.y=b;v[i].B.x=c;
      scanf("%d%d%d",&a,&b,&c);
   v[i].B.y=a;v[i].C.x=b;v[i].C.y=c;
  }
  scanf("%d%d",&a,&b);
  K.x=a,K.y=b;
  //a)
  for(i=1;i<=n;++i)
  {
   if(interior(v[i].A,v[i].B,v[i].C,K))
       l[++nr]=i;
arie=aria(v[i].A,v[i].B,v[i].C);
       if(arie>ariemax)
           ariemax=arie,imax=i;
  }
  printf("%d ",nr);
  for(i=1;i<=nr;++i)
     printf("%d ",l[i]);
  printf("\n");
  bool ok=true;
  for(i=1;i<imax;++i)
       {
       if(!(interior(v[imax].A,v[imax].B,v[imax].C,v[i].A) && interior(v[imax].A,v[imax].B,v[imax].C,v[i].B) && interior(v[imax].A,v[imax].B,v[imax].C,v[i].C)))
      ok=false;
       }
  for(i=imax+1;i<=n;++i)
       {
       if(!(interior(v[imax].A,v[imax].B,v[imax].C,v[i].A) && interior(v[imax].A,v[imax].B,v[imax].C,v[i].B) && interior(v[imax].A,v[imax].B,v[imax].C,v[i].C)))
      ok=false;
       }
  if(ok)
     printf("%d",imax);
  else
      printf("%d",0);
   return 0;
}
