#include <fstream>

using namespace std;
int v[1001];
int main()
{
    ifstream cin("papusa.in");
    ofstream cout("papusa.out");
    int n,i,m=0,p=0,a,b,j;
    cin>>n;
    for(i=1;i<=n;++i)
        cin>>v[i];
    for(j=0;j<n/2;++j)
    {
        a=b=1;
        for(i=n/2-1;i>0;--i)
            if(v[i+1]>v[i])
                a++;
            else
                break;
        for(i=n/2+2;i<=n;++i)
            if(v[i-1]>v[i])
                b++;
            else
                break;
        if(p<(a+b))
            p=a+b,m=j;
        a=b=1;
        for(i=n-1;i>=n/2;--i)
            if(v[i+1]>v[i])
                a++;
            else
                break;
        for(i=2;i<=n/2;++i)
            if(v[i-1]>v[i])
                b++;
            else
                break;
        if(p<(a+b))
            p=a+b,m=j;
        a=v[1];
        for(i=1;i<n/2;++i)
            v[i]=v[i+1];
        v[n/2]=a;
        b=v[n];
        for(i=n;i>n/2+1;--i)
            v[i]=v[i-1];
        v[n/2+1]=b;
    }
    cout<<m<<"\n"<<p;
    return 0;
}
