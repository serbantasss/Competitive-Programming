#include <cstdio>

using namespace std;

int main()
{
    int h,m,n;
    scanf("%d%d%d",&h,&m,&n);
    m=h*60+m+n;
    h=m/60%24;
    m=m%60;
    printf("%d %d",h,m);
    return 0;
}
