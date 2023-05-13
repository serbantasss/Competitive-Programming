#include <fstream>

using namespace std;

ifstream fin("greieri.in");
ofstream fout("greieri.out");

short int g[100001];
int i, j, k, n, m, gasit, initial;

int main()
{
    fin >> n >> m;
    for (i = 1; i <= n; ++i)
        g[i] = i;
    gasit=n*(n-1);
    fout<<gasit<<endl;
    gasit = 0;
    i = n;
    for (k = 1; k <= m; ++k)
    {
        swap(g[i], g[i-1]);
        --i;
        if (i == 1)
            i = n;
    }
    for (i = 1; i <= n; ++i)
        fout <<g[i] <<' ';
    return 0;
}
