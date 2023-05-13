#include <fstream>
#include <algorithm>
using namespace std;
int v[801];
int main()
{
    freopen("mere3.in","r",stdin);
    freopen("mere3.out","w",stdout);
    int n,p1,p2,p3;
    scanf("%d%d%d%d",&n,&p1,&p2,&p3);
    int m1,m2,m3,i1,i2,i3;
    m1=p1;m2=p2;m3=p3;
    i1=i2=i3=1;
    v[1]=1;
    for(int k=2;k<=n+1;++k)
    {
        m1=p1*v[i1];
        m3=p3*v[i3];
        m2=p2*v[i2];
        int min;
        min=m1;
        if(min>m2)
            min=m2;
        if(min>m3)
            min=m3;
        v[k]=min;
        if(min==m1)
            i1++;
        if(min==m2)
            i2++;
        if(min==m3)
            i3++;
    }
    for(int i=2;i<=n+1;++i)
        printf("%d\n",v[i]);
    return 0;
}
