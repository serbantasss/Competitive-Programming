#include <fstream>
using namespace std;
ifstream in("ziua7.in");
ofstream out("ziua7.out");
int main()
{
    /**In cea de-a saptea zi,lui Aschiuta ii trecu prin minte ca ar fi mai interesant daca numerele caselor ar fi in
    urmatoarea succesiune:11,22,33,44,55,66,77,88,99,111,222,333,.....
    Sa se genereze n numere de case conform regulii lui Aschiuta**/
    int n,k=2,rest;
    in>>n;
    if(n==0)
        return 0;
    while(n>0)
    {
        if(n/9==0)
            for(int i=1; i<=n%9; ++i)
            {
                for(int j=1; j<=k; ++j)
                    out<<i;
                out<<" ";
            }
        else
            for(int i=1; i<=9; ++i)
            {
                for(int j=1; j<=k; ++j)
                    out<<i;
                out<<" ";
            }
        k++;
        n-=9;
    }
    return 0;
}
