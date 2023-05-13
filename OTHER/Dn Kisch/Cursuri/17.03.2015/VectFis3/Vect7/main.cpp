#include <iostream>

using namespace std;

int main()
{
    int n,i,s=0,x;
    cin>>n;
    for(i=1;i<=n;++i)
    {
      cin>>x;
      s+=x;
    }
    cout<<s/n<<" este media aritmetica a celor n nr.";
    return 0;
}
