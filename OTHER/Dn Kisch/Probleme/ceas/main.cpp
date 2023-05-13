#include <cstdio>

using namespace std;
int timetotal,t,h,m;
int main()
{
    freopen("ceas.in","r",stdin);
    freopen("ceas.out","w",stdout);
    int h1,h2,m1,m2;
    scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
    timetotal=h2*60+m2;
    h=h1;
    m=m1;
    while(t<timetotal)
    {
        if(h*5==m)
        {
            t=t+6;
            if(t<=timetotal)
                  m++;
        }
        else
        {
            t++;
            m++;
        }
        if(m==60)
        {
            h=h+1;
            h%=12;
            m=0;
        }
    }
    if(h==0)
        h=12;
    printf("%d %d",h,m);
    return 0;
}
