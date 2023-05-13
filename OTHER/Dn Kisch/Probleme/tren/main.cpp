#include <cstdio>

using namespace std;
struct it {
    int linie,ora,minut,durata;
};
int l[101],m[101];
int main() {
    freopen("tren.in","r",stdin);
    freopen("tren.out","w",stdout);
    int n,nr1=0,nr2=0,nr=0,du=0,max=0,vd=0,i;
    scanf("%d",&n);
    for(i=1; i<=n; ++i) {
        int linie,ora,minut,durata;
        scanf("%d%d%d%d",&linie,&ora,&minut,&durata);
        l[i]=linie;
        m[i]=ora*100;
        if(!(minut+durata<=59)) {
            m[i]=m[i]+100+(minut+durata)%60;
        } else
            m[i]=m[i]+(minut+durata);
        if(linie==1)
            nr1++;
        else
            nr2++;
    }
    if(nr1>nr2)
        printf("%d ",nr1);
    else
        printf("%d ",nr2);
    nr=1;
    int sf;
    sf=m[1];
    vd=sf;
    for(i=2; i<=n; ++i) {
        du=m[i];
        if(sf<du) {
            nr++;
            sf=du;
        }
        if(max<du-vd)
            max=du-vd;
        vd=du;
    }
    printf("%d %d",nr,max);
    return 0;
}
