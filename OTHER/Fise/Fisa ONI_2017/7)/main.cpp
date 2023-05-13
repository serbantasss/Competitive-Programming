#include <cstdio>
#include <cstring>
using namespace std;
struct calendar
{
    int zi,luna,an;
};
int main()
{
    int zi,luna,an;
    calendar a,b;
    scanf("%d%d%d",&zi,&luna,&an);
    a.zi=zi,a.luna=luna,a.an=an;
    scanf("%d%d%d",&zi,&luna,&an);
    b.zi=zi,b.luna=luna,b.an=an;
    if(a.an==b.an)
    {
        if((a.an%4==0 && a.an%100!=0) || a.an%400==0)
        {
            if(a.luna==b.luna)
            {
                printf("%d",abs(a.zi-b.zi));
            }
            if()
        }
    }
    return 0;
}
