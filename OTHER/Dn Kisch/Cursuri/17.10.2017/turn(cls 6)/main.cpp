#include <fstream>
using namespace std;
int a[49001], b[49001];
vector<int>v1,v2;
int main()
{   ifstream cin ("turn.in");
    ofstream cout ("turn.out");
    int n, k, pos=1, m=1, x;
    cin >> n >> k;scanf("%d%d%d",&n,&k,&x);
    cin >> x;
    a[0] = x;
    b[0] = 1;
    for(int i=1; i<n; i++)
    {
        cin >> x;
        if(x != a[pos-1])
        {
            m = 1;
            a[pos] = x;
            b[pos] = m;
            pos++;
    }
        else
        {
            ++b[pos-1];
        }
    }
    for(int i=0; i<pos;)
    {
        if(b[i] >= k)
        {
            b[i] = -1;
            a[i] = -1;
            if(a[i-1]==a[i+1] && i+1<pos && i-1>=0)
            {
                b[i-1] += b[i+1];
                b[i+1] = -1;
                a[i+1] = -1;
                for(int j=i; j<pos-2; j++)
                {
                    a[j] = a[j+2];
                    b[j] = b[j+2];
                }
                pos -=2;
                i--;
            }
            else
            {
                for(int j=i;j<pos-1;j++)
                    {
                        a[j]=a[j+1];
                        b[j]=b[j+1];
                    }
                pos--;
                i--;
            }
        }
        else
            i++;
    }
    n=0;
    for(int i=0; i<pos; i++)
        n+=b[i];
    cout<<n<<endl;
    for(int i=0; i<pos; i++)
        for(int j=1;j<=b[i];++j)
            cout << a[i] << " ";
    return 0;
}
