#include <cstdio>

using namespace std;

int v[10];
int main()
{
    freopen("numar2.in","r",stdin);
    freopen("numar2.out","w",stdout);
    int n,i,ok=1,pos;
    char c,ch,g;
    scanf("%d\n",&n);
    c=getc(stdin);
    ch=c;
    for(i=2;i<=n;++i)
    {
        c=getc(stdin);
        if(ch-'0'<c-'0' && ok==1)
            {
            g=c;
            pos=i-1;
            ok=0;
            }
        ch=c;
    }
    fclose(stdin);
    freopen("numere2.in","r",stdin);
    scanf("%d\n",&n);
    ///citim si afisam pana la pos-1
    for(i=1;i<=pos-1;++i)
    {
    scanf("%c",&c);
    printf("%c",c);
    }
    ///citim si punem in vectorul de frecventa
    for(i=pos+1;i<=n;++i)
    {
        scanf("%c",&c);
        ++v[c-'0'];
    }
    ok=1;
    ///cautam valoare care trebuie sa o interschimbam
    for(i=0;i<=9;++i)
        if(v[i]>0)
        {
            if(i>ch-'0' && ok==1)
            {
                v[i]--;
                v[ch-'0']++;
            }
        }
    ///afisam restul
    for(i=0;i<=9;++i)
        if(v[i]>0)
    {
        for(int j=1;j<=v[i];++j)
            printf("%d",i);
    }
    return 0;
}
