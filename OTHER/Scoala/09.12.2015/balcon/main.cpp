#include <iostream>
#include <algorithm>
using namespace std;
int a[105][105],v[11025];
int main()
{
    //ifstream cin("balcon.in");
    //ofstream cout("balcon.out");
    int i,j,n,k,dir;
    cin>>n;
    for(i=1; i<=n*n; ++i)
        cin>>v[i];
    sort(v+1,v+n*n+1);
    k=1;
    j=1;
    i=1;
    dir=1;
    while(k<=n*n)
    {
        a[i][j]=v[k];
        ++k;
        switch (dir)
            {
            case 1:
            {
                j++;
                if (j>n-i+1)
                {j--;i++;dir=2;}
                break;
            }
            case 2:
            {
                i++;
                if (i>j)
                {j--;i--;dir=3;}
                break;
            }
            case 3:
            {   j--;
                if (j<n-i+1)
                {j++;i--;dir=4;}
                break;
            }
            case 4:
            {
                i--;
                if(i<j+1)
                {dir=1;i++;j++;}
                break;
            }
            }
    }
    for(i=1; i<=n; ++i)
        {
        for(j=1; j<=n; ++j)
            cout<<a[i][j]<<" ";
        cout<<endl;
        }
    return 0;
}
