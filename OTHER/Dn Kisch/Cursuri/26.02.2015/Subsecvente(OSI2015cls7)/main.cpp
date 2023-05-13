#include <cstdio>
using namespace std;
struct VECTOR
{
    int last,first;
};
VECTOR v[10001];
int main()
{
 freopen("subsecventa.in","r",stdin);
 freopen("subsecventa.out","w",stdout);
 int n,i,s=0,x,a,b;
 a=b=0;
 scanf("%d",&n);
 for(i=1;i<=n;++i)
 {
     scanf("%d",&x);
     s=(s+x)%n;
     if(v[s].first==0)
         v[s].first=i;
     else
         v[s].last=i;
 }
 if(v[0].first>0 && v[0].last==0)
 {
     v[0].last=v[0].first;
     v[0].first=0;
     }
 for(i=0;i<n;++i)
 {
  if(v[i].last>0 && v[i].first>0)
  {
   if(v[i].last>b)
   {
       b=v[i].last;
       a=i;
   }
  }
 }
 printf("%d %d",v[a].first+1,v[a].last);
 return 0;
}
