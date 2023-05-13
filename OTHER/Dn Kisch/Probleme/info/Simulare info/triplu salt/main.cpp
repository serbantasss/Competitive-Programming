#include <cstdio>
using namespace std;
struct op {
    int A,B,C;
};
int main() {
    freopen("triplu.in","r",stdin);
    freopen("triplu.out","w",stdout);
    int a,b,c,pa,pb,pc,sa,sb,sc;
    op stare;
    scanf("%d%d%d%d%d",&b,&c,&pa,&pb,&pc);
    a=0;
    sa=sc=sb=0;
    stare.A=stare.B=stare.C=1;
    while(stare.A ||  stare.B || stare.C) {
        if(stare.A==1) {
            a++;
                if(a>b && a>c) {
                    stare.A=0;
                    if(sa==0) ++sa;
                } else {
                    a=a+pa,sa++;
                }
            if(a==b || a==b)
                stare.A=2;
        } else if(stare.A==2)
            stare.A=1;
        if(stare.B==1) {
            b++;

                if(b>a && b>c) {
                    stare.B=0;
                    if(sb==0) ++sb;
                } else {
                    b=b+pb,sb++;
                }
                if(b==a || b==c)
                   stare.B=2;
        } else if(stare.B==2)
            stare.B=1;
        if(stare.C==1) {
            c++;
                if(c>b && c>a) {
                    stare.C=0;
                    if(sc==0) ++sc;
                } else {
                    c=c+pc,sc++;
                }
            if(c==a || c==b)
                stare.C=2;
        } else if(stare.C==2)
            stare.C=1;
    }
    printf("%d %d %d\n%d %d %d",a,b,c,sa,sb,sc);
    return 0;
}
