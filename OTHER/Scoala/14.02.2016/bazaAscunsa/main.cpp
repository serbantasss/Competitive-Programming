#include <cstdio>
#include <fstream>
#include <cstring>
using namespace std;
char s[20];
int put(char c)
{
    if(c>='1' && c<='9')
            return c-'1'+1;
    if(c>='A' && c<='Z')
        return c-'A'+10;
}
int main()
{
    freopen("ascunsa.in","r",stdin);
    ofstream cout("ascunsa.out");
    int n,i,k,bazamin=0,baza,j;
    scanf("%d %s",&n,&s);
    k=strlen(s);
    for(i=0;i<k;++i)
    {
        if(s[i]>='1' && s[i]<='9')
            baza=s[i]-'1'+1;
        if(s[i]>='A' && s[i]<='Z')
            baza=s[i]-'A'+10;
        if(baza+1>bazamin)
            bazamin=baza+1;
    }
    for(;bazamin<=35;++bazamin)
    {
        long long int nr=0,p=1;
        i=bazamin;
        for(j=1;j<k;++j)
            p=p*i;
        for(j=0;j<k;++j)
            nr=nr+put(s[j])*p,p/=i;
        if(nr>n)
        {
            cout<<nr<<" "<<bazamin;
            return 0;
        }
    }
    return 0;
}
