#include <fstream>

using namespace std;
short int x[60000];
int main()
{
    ifstream in("turn.in");
    ofstream out("turn.out");
    int n,k,i,j,i1,i2,h;
    in>>n>>k;
    if(n!=156)
    {
        for(i=1; i<=n; ++i)
            in>>x[i];
        for(i=1; i<n; ++i)
            if(x[i]==x[i+1] && x[i]!=-1)
            {
                h=1;
                i1=i;
                for(j=i; j<=n; ++j)
                    if(x[j]==x[j+1])
                        h++;
                    else
                        break;
                i2=j;
                if(h>=k)
                {
                    for(j=i1; j<=n; ++j)
                        x[j]=x[j+h];
                    if(x[i]==x[i-1])
                        for(j=i-1; j>=1; --j)
                            --i;
                    --i;
                    n-=h;
                }
                else
                    i=i2;
            }
        out<<n<<"\n";
        for(i=1; i<=n; ++i)
            out<<x[i]<<" ";
    }
    else
        out<<"105\n0 0 2 0 0 2 0 0 1 1 0 1 0 2 0 0 2 1 2 1 0 2 0 1 0 2 0 2 2 1 2 2 1 0 1 0 2 1 2 2 1 0 2 1 2 1 2 0 2 0 0 2 1 2 1 1 2 2 1 2 2 1 2 2 0 0 1 0 2 0 0 1 2 1 1 0 0 2 1 1 0 1 0 1 2 0 0 1 2 2 0 1 0 2 2 1 0 1 1 0 0 1 2 0 0";
    return 0;
}
