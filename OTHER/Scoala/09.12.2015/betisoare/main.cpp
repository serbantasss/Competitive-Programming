#include<fstream>
#include<cstring>

using namespace std;
const int NMAX = 1000000+5;
char s[NMAX];
long long int nr,p,q;
int main()
{
    ifstream cin("betisoare.in");
    ofstream cout("betisoare.out");
    int i,n,l,j;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>s+1;
        l=strlen(s+1);
        p=0;
        q=1;
        nr=0;
        for(j=1; j<=l; j++)
        {
            if(s[j]=='I')
                p++;
            else
                if(s[j]=='+')
                    {
                        q*=p;
                        p=0;
                        nr+=q;
                        q=1;
                    }
                else
                    {
                        q*=p;
                        p=0;
                    }
        }
        q*=p;
        p=0;
        nr+=q;
        q=1;
        cout<<nr<<"\n";
    }
    return 0;
}
