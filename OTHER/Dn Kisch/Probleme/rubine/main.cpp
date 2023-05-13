#include <cstdio>
#include <cmath>
#define IN "rubine.in"
#define OUT "rubine.out"
using namespace std;
const int nmax=2000000;
bool c[nmax];
int r[nmax];
void ciur()
{
int lim=(int)sqrt((double)nmax),j,i;
c[0]=c[1]=1;
for(i=4;i<=nmax;i+=2)
   c[i]=1;
for(i=3;i<=lim;i+=2)
     if(!c[i])
       for(j=i*i;j<=nmax;j=j+2*i)
          c[i]=1;
}
long long rmara=0,rmihai=0;
int main()
{
    freopen(IN,"r",stdin);
    freopen(OUT,"w",stdout);
    int n,k,p,i,prime=0,pmara,pmihai,same=1;
    bool stopmara=0,stopmihai=0;
    scanf("%d",&n);
    ciur();
    scanf("%d%d",&k,&p);
    for(i=0;i<n;++i)
      {
      scanf("%d",&r[i]);
      if(!c[r[i]])
         prime++;
      }
    printf("%d\n",prime);
    pmara=pmihai=0;
    if(!c[r[0]])
    {
      rmara=(r[0]+1)/2;
      rmihai=r[0]/2;
    }
    while(1)
    {
      if(pmara==pmihai)
          {
          same++;
          if(!c[r[pmara]])
          {
            rmara+=(r[pmara]+1)/2;
            rmihai+=r[pmihai]/2;
            r[pmara]=0;
          }
          }
          else
             {
               if(!c[r[pmara]])
               {
                 rmara+=r[pmara];
                 r[pmara]=0;
               }
               if(!c[r[pmihai]])
               {
                 rmihai+=r[pmihai];
                 r[pmihai]=0;
               }
             }
          pmara=(pmara+k)%n;
          if(pmara==0)
             stopmara=1;
          pmihai=(pmihai+p)%n;
          if(pmihai==0)
               stopmihai=1;
          if(stopmara==1 && stopmihai==1)
              break;
    }
    printf("%d %d\n",rmara,rmihai);
    printf("%d",same);
    return 0;
}
