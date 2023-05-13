#include <iostream>
#include <fstream>
using namespace std;

int p[2005];

int main()
{
    ifstream fin("arme.in");
    ofstream fout("arme.out");
    int n,m,i,j,aux,smax;
    fin>>n>>m;
    for(i=0; i<n; i++)
        fin>>p[i];
    for(i=n; i<n+m; i++)
        fin>>p[i];
    smax=0;
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n+m; j++)
        {
            if (p[i]<p[j])
            {
                aux=p[i];
                p[i]=p[j];
                p[j]=aux;
            }
        }
        smax+=p[i];
    }
    fout<<smax<<"\n";
    fout.close();
    return 0;
}
