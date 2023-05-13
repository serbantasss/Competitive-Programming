#include <fstream>

using namespace std;
int v[1001],nrg[1001];

ifstream in("cod.in");
ofstream out("cod.out");

int main()
{
    int n,i,c,u,cifmax,j,k,aux,max;
    in>>n;
    max=-1;
    j=1;
    for(i=1;i<=n;i++)
        in>>v[i];
    for(i=1;i<=n;i++)
      {
       aux=v[i];
       do
         {
          u=aux%10;
           if(u>max)
             max=u;
          aux/=10;
         }while(aux>0);
      }
    for(i=1;i<=n;i++)
      {
       aux=v[i];
       do
         {
          u=aux%10;
           if(u==max)
             {
               max=u;
               nrg[j]=v[i];
               j++;
             }
          aux/=10;
         }while(aux>0);
      }
    c=nrg[1];
    k=j-1;
    for(j=2;j<=k;j++)
          if(c>nrg[j])
             c=nrg[j];
    out<<c;
    in.close();
    out.close();
    return 0;
}
