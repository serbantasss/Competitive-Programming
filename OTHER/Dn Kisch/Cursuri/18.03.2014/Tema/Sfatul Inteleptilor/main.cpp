#include <iostream>

using namespace std;
long long int v[500001];
int main()
{
    int n,x,i,k,nr,aux,aux2,ko,ui,r;
    cin>>n;
    cin>>x;
    r=1;
    k=0;
    ui=ko=nr=0;
    for(i=1;i<=n;i++)
      {
      k=0;
      if(i==1)
          {
           k++;
           v[i]=k;
          aux=i;
          aux2=k;
          r+=3;
          }
       if(i>1)
           {
           if(aux2%2==1)
             {
            k+=2;v[i]=k;
            aux2=k;
             }
           if(aux2%2==0&& i%3==0)
              {
            k+=2;v[i]=k;
            aux2=k;
              }
            if(aux2%2==0 && i==r)
               {
                k++;v[i]=k;
                aux2=k;r+=3;
               }
            aux=i;
           }
      }
    for(i=1;i<=n;i++)
        {
       if(v[i]%2==0)
           nr++;
       else
          ko++;
        if(i==x)
          {
          if(v[i]%2==0)
              ui+=2;
           else
              ui++;
          }
        }
    cout<<nr<<"\n";
    cout<<ko<<"\n";
    if(ui==1)
        cout<<"rubin";
    else
        cout<<"smarald";
    return 0;
}

