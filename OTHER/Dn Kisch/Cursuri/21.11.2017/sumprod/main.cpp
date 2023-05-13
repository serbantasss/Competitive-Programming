#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
long long int s,p,nr,k,st[15],viz[15],suma=0,prod=1,ok;
void fisiere()
{
    freopen("sumprod.in","r",stdin);
    freopen("sumprod.out","w",stdout);
}
inline void init()
{
    st[k]=0;
}
inline int succesor()
{
    if(st[k]<s)
    {
        if(st[k]>0)
            prod=prod/st[k];
        if(prod==0)
            prod=1;
        st[k]++;
        prod=prod*st[k];
        suma++;
        return 1;
    }
    return 0;
}
void print()
{
    int i;
    for(i=1; i<=nr; ++i)
        printf("%d ",st[i]);
    printf("\n");
}
void backt()
{
    int es,ev;
    k=1;
    init();
    while(k>0)
    {
        do
        {
            es=succesor();
            if(es)
                ev=1;
        }
        while(es && !ev);
        if(es)///am gasit un succesor valid
        {
            if(k==nr)
            {
                if(suma==s && prod==p)
                {
                    print();
                    ok=1;
                    return;
                }
            }
            else
            {
                k++;
                init();
            }
        }
        else///nu mai avem succesori pe niv. k
        {
            prod=prod/st[k];
            suma-=st[k];
            k--;
        }
    }///do while
}///backtraking
int main()
{
    fisiere();
    scanf("%d%d%d",&s,&p,&nr);
    backt();
    if(ok==0)
        printf("NU");
    return 0;
}
