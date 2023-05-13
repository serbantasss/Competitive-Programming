#include <cstdio>
#include <set>
#include <algorithm>
#include <cmath>
using namespace std;
struct POINT
{
 int x,y;
};
struct cmp
{
    bool operator()(POINT a,POINT b)
    {
        if(a.x==b.x)
            return a.y<b.y;
        return a.x<b.x;
    }
};
int dist(POINT a,POINT b)
{
    return (b.y-a.y)*(b.y-a.y)+(b.x-a.x)*(b.x-a.x);
}
set<POINT,cmp>s;
int main()
{
    int n,i,a,b;
    POINT temp;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        scanf("%d%d",&a,&b);
        temp.x=a;
        temp.y=b;
        s.insert(temp);
    }
    int destmax=0,distanta;
    set<POINT,cmp>::iterator it1,it2;
    for(it1=s.begin();it1!=s.end();++it1)
    {
        for(it2=s.begin();it2!=s.end();++it2)
        {
            distanta=dist(*it1,*it2);
            if(distanta>destmax)
                destmax=distanta;
        }
    }
    printf("%f",sqrt((double)destmax));
    return 0;
}
