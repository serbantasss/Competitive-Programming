#include <cstdio>
#include <cstdlib>
using namespace std;
int min=2400,max,dif,k;
int f[10],m[10];
int main() {
    freopen("ore.in","r",stdin);
    freopen("ore.out","w",stdout);
    int curent,j,dh,dm,i,moment,ii;
    scanf("%d",&curent);
    for(i=1; i<=4; ++i) {
        f[curent%10]++;
        curent/=10;
    }
    for(i=0; i<=23; i++)
        for(ii=0; ii<=59; ii++) {
            moment=i*100+ii;
            k=moment;
            for(j=1; j<=4; ++j) {
                m[moment%10]++;
                moment/=10;
            }
            bool ok=true;
            for(j=0; j<=9; ++j) {
                if(f[j]!=m[j])
                    ok=false;
                m[j]=0;
            }
            if(ok==true) {
                if(min>k)
                    min=k;
                if(max<k)
                    max=k;
            }
        }
    dh=max/100-min/100;
    dm=max%100-min%100;
    if(dm<0)
        dm=60-min%100+max%100,dh--;
    dif=dh*100+dm;
    printf("%d%d:%d%d\n",min/1000,min/100%10,min%100/10,min%10);
    printf("%d%d:%d%d\n",max/1000,max/100%10,max%100/10,max%10);
    printf("%d%d:%d%d\n",dif/1000,dif/100%10,dif%100/10,dif%10);
    return 0;
}
