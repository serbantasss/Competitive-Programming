#include <fstream>

using namespace std;
int f1[10],f2[10];
int main()
{
    ifstream in("cifre3.in");
    ofstream out("cifre3.out");
    int a,b,i;
    in>>a>>b;
    do
    {
       f1[a%10]++;
       a/=10;
    }while(a);
    do
    {
       f2[b%10]++;
       b/=10;
    }while(b);
    for(i=0;i<=9;++i)
        if(f1[i] && f2[i])
          out<<i<<" ";
    out<<endl;
    for(i=9;i>=0;--i)
        for(int j=1;j<=f1[i]+f2[i];++j)
              out<<i;
    return 0;
}
