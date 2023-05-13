#include <fstream>
#include <iostream>
#include <algorithm>
using namespace std;
int f[10],v[101];
bool cmp(int a,int b)
{
    return f[a]<f[b];
}
int main()
{
    ifstream cin("stampile.in");
    int n,i,min=1000,cp,max=0,j;
    cin>>n;
    for(i=1;i<=n;++i)
    {
        cin>>v[i];
        cp=v[i];
        do{
        f[cp%10]++;
        cp/=10;
        }while(cp);
    }
    for(i=0;i<=9;++i)
      if(f[i])
       if(f[i]<min)
          min=f[i];
    for(i=0;i<=9;++i)
      if(f[i])
       if(f[i]==min)
          cout<<i<<" ";
    cout<<endl;
    for(i=500;i>=1;--i)
    {
        for(j=0;j<=9;++j)
            if(f[j]==i)
               cout<<j<<" ";
    }
    cout<<endl;
    for(i=1;i<=n;++i)
    {
      for(j=0;j<=9;++j)
         f[j]=0;
      cp=v[i];
      do{
          f[cp%10]++;
          cp/=10;
      }while(cp);
      int cnt=0;
      for(j=0;j<=9;++j)
         if(f[j])
           cnt++;
      if(cnt==2)
         cout<<v[i]<<" ";
    }
    return 0;
}
