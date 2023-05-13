#include <cstdio>
using namespace std;
int SA,SB,SC;
int main() {
    freopen("triplu.in","r",stdin);
    freopen("triplu.out","w",stdout);
    int a,b,c,pa,pb,pc,sa,sb,sc;
    scanf("%d%d%d%d%d",&b,&c,&pa,&pb,&pc);
    a=0;
    sa=sc=sb=0;
    SA=SB=SC=1;
    while(SA ||  SB|| SC)
    {
        if(SA==1)
        {
            a++;
            if(a>b && a>c)
            {
                SA=0;
                if(sa==0)
                    ++sa;
            }
            else
                a=a+pa,sa++;
            if(a==b || a==b)
                SA=2;
        }
        else
            if(SA==2)
                SA=1;
        if(SB==1)
        {
            b++;
            if(b>a && b>c)
            {
                SB=0;
                if(sb==0)
                    ++sb;
            }
            else
                b=b+pb,sb++;
            if(b==a || b==c)
                SB=2;
        }
        else
            if(SB==2)
                SB=1;
        if(SC==1)
        {
            c++;
            if(c>b && c>a)
            {
                SC=0;
                if(sc==0)
                    ++sc;
            }
            else
                c=c+pc,sc++;
            if(c==a || c==b)
                SC=2;
        }
        else
            if(SC==2)
                SC=1;
    }
    printf("%d %d %d\n%d %d %d",a,b,c,sa,sb,sc);
    return 0;
}
