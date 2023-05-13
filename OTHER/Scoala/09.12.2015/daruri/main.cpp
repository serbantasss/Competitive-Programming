#include <fstream>

using namespace std;

int main()
{
    ifstream cin("daruri.in");
    ofstream cout("daruri.out");
    int a,b,r,ca,cb;
    cin>>a;
    cin>>b;
    r=a%b;
    ca=a;cb=b;
    while(r)
    {
        a=b;
        b=r;
        r=a%b;
    }
    if(b!=1)
        cout<<b<<"\n"<<ca/b<<" "<<cb/b;
    else
        cout<<"0\n0 0";
    return 0;
}
