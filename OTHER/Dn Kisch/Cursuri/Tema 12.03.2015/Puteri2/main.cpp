#include <fstream>

using namespace std;
ifstream f("numere7.in");
ofstream g("numere7.out");
int v[10];
int main()
{
    int a,b,c,i,j;
    f>>a>>b;
    do
    {
        c=a%10;
        v[c]++;
        a=a/10;
    }while(a>0);
    do
    {
        c=b%10;
        v[c]++;
        b=b/10;
    }while(b>0);
    for(i=1;i<=9;++i)
        if(v[i]>0)
    {
       for(j=1;j<=v[i];++j)
        g<<i;
    }
    return 0;
}
