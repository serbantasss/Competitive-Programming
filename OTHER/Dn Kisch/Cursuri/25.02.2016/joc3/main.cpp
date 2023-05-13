#include <fstream>
using namespace std;
char v[40001];
long n,x,y;
int main()
{
    ifstream cin("joc3.in");
    ofstream cout("joc3.out");
    long t=0,s=0,b,r,i;
    cin>>n>>x>>y;
    v[1]=11;
    b=r=1;
    t=n-1;
    do
    {
        s++;
        b+=x;
        r-=y;
        if(r<1)
            r+=n;
        if(b>n)
            b-=n;
        if(v[b]==0)
            t--;
        if((v[r]==0)&&(b!=r))
            t--;
        v[b]++;
        v[r]+=10;
    }
    while((b!=r)&&(v[r]/10!=2)&&(v[b]%10!=2));
    cout<<t<<" "<<s<<" "<<b<<" "<<r<<endl;
    return 0;
}

