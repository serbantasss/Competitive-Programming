#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int n,k,st[15],viz[15];
void fisiere()
{
    freopen("backt.in","r",stdin);
    freopen("backt.out","w",stdout);
}
void init()
{
    st[k]=0;
}
int succesor()
{
    if(st[k]<n)
    {
        st[k]++;
        return 1;
    }
    return 0;
}
int valid()
{
    if(viz[st[k]])
        return 0;
    viz[st[k]]=1;
    return 1;
}
int solutie()
{
    return k==n;
}
void print()
{
    int i;
    for(i=1; i<=n; ++i)
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
                ev=valid();
        }
        while(es && !ev);
        if(es)///am gasit un succesor valid
        {
            if(solutie())
            {
                    print();
                    viz[st[k]]=0;
            }
            else
            {
                k++;
                init();
            }
        }
        else///nu mai avem succesori pe niv. k
           {
            k--;
            viz[st[k]]=0;
           }
    }///do while
}///backtraking
int main()
{
    //fisiere();
    scanf("%d",&n);
    backt();
    return 0;
}
