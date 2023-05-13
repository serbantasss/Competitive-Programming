#include <cstdio>
#include <set>
#include <algorithm>
#include <cmath>
using namespace std;
struct intt
{
 long long rot;
 int cab,ind;
};
struct cmp
{
    bool operator()(intt a,intt b)
    {
        if(a.rot==b.rot)
            return a.cab<b.cab;
        return a.rot<b.rot;
    }
};
set<intt,cmp>s;
long long  R[100005];
set<intt,cmp>::iterator it;
int main()
{
    freopen("roata.in","r",stdin);
    freopen("roata.out","w",stdout);
    intt temp;
    int n,p,i,j;
    long long sum=0;
    scanf("%d%d",&n,&p);
    sum=0;
	for (i=0;i<p;i++)
    {
		scanf("%d",&R[i]);
		sum+=R[i];
	}
	printf("%lld\n",sum);
	if(p<=n)
    {
		for (i=0;i<p;i++) {
			temp.cab=i+1;
			temp.ind=i+1;
			temp.rot=R[i];
			s.insert(temp);
		}
		for(i=0;i<n-1;++i)
        {
            printf("%d ",(*s.begin()).ind);
            s.erase(s.begin());
        }
		printf("%d\n%d\n",(*s.begin()).ind,(*s.begin()).cab);
	}
	else
        {
		for (i=0;i<n;i++)
            {
			temp.cab=i+1;
			temp.ind=i+1;
			temp.rot=R[i];
			s.insert(temp);
		}
		for (i=n;i<p;i++)
        {
			temp=*s.begin();
			printf("%d ",temp.ind);
			temp.rot+=R[i];
			temp.ind=i+1;
			s.erase(s.begin());
			s.insert(temp);
		}
		for (i=0;i<n-1;++i)
        {
			printf("%d ",(*s.begin()).ind);
            s.erase(s.begin());
		}
printf("%d\n%d\n",(*s.begin()).ind,(*s.begin()).cab);
	}
    return 0;
}
