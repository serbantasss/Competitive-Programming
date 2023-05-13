#include <fstream>

using namespace std;

int x[105],y[105];
int main()
{
    ifstream cin("munte3.in");
    ofstream cout("munte3.out");
    int n,k,i,t=0,tot=0,poz,j;
    cin>>n;
    k=-1;
    for(i=0; i<n; i++)
        cin>>x[i];
    do
    {
        t++;
        k=-1;
        for(i=1; i<n-1; i++)
            if (x[i]>x[i-1] && x[i]>x[i+1])
            {
                k++;
                y[k]=i;
            }

        if (t==1)
            cout<<k+1<<endl;
        for(i=0; i<=k; i++)
        {
            poz=y[i]-i;
            for(j=poz; j<n-1; j++)
                x[j]=x[j+1];
            n--;
        }
        tot=tot+k+1;
    }while (k!=-1);
    cout<<tot<<endl;
    cout<<n<<endl;
    return 0;
}
