#include <fstream>

using namespace std;
int v[10001];
ifstream in("palindrom.in");
ofstream out("plaindrom.out");
int main()
{
    int n,i,max;
    cin>>n;
    max=0;
    for(i=1;i<=n;i++)
       cin>>v[i];
    for(i=1;i<=n;i++)
      {
       for(i=1;i<=n;i++)
          if(v[i]>max)
             max=v[i];
      for(i=1;i<=n;i++)
          if(v[i]==max)
              nr++;
      if(nr==2)

      }
    return 0;
}
