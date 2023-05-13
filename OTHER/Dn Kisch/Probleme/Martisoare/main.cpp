#include <cstdio>
using namespace std;

int v[100001];
int main()
{
    freopen("martisoare.in","r",stdin);
    freopen("martisoare.out","w",stdout);
    int n,i,cp1,cp2,ultimul;
    bool ok;
    scanf("%d",&n);
    for(i=1; i<=n; ++i)
        scanf("%d",&v[i]);
    if(v[1]+1==v[2])
    {
        ultimul=v[1]-1+n;
        ok=false;
        for(i=3; i<=n && !ok; i++)
        {
            if(v[i]-v[i-1]>1 || v[i]-v[i-1]<1)
            {
                cp1=v[i-1]+1;
                cp2=v[i];
                ok=true;
                int a,b;
                do
                {
                    a=cp1%10;
                    b=cp2%10;
                    if(a!=b)
                    {
                        if(a<b)
                            printf("%d %d\n",a,b);
                        else
                            printf("%d %d\n",b,a);
                        break;
                    }
                    else
                        cp1/=10,cp2/=10;
                }
                while(cp1 && cp2);
            }
        }
    }
    else
    {
        if(v[3]-v[2]==1)
        {
            cp1=v[2]-1;
            cp2=v[1];
            ok=true;
            ultimul=v[2]+n-2;
        }
        else if(v[4]-v[2]==2)
        {
            cp1=v[2]-1;
            cp2=v[1];
            ok=true;
            ultimul=v[4]+n-4;
        }
        else if(v[4]-v[3]==1)
        {
            cp1=v[2];
            cp2=v[3]-1;
            ok=true;
            ultimul=v[3]+n-3;
        }
        else if(v[3]-v[1]==2)
        {
            cp1=v[2];
            cp2=v[3]-1;
            ok=true;
            ultimul=v[3]+n-3;
        }
        else
        {
            cp1=v[2];
            cp2=v[4]-2;
            ok=true;
            ultimul=v[4]+n-4;
        }
        int a,b;
        do
        {
            a=cp1%10;
            b=cp2%10;
            if(a!=b)
            {
                if(a<b)
                    printf("%d %d\n",a,b);
                else
                    printf("%d %d\n",b,a);
                break;
            }
            else
                cp1/=10,cp2/=10;
        }
        while(cp1 && cp2);
    }
    if(ok==false)
        printf("0 0\n");
    printf("%d",ultimul);
    return 0;
}

