#include <cstdio>
#define IN "colier.in"
#define OUT "colier.out"
using namespace std;
int nefol;
int v[1005];
int main()
{
    freopen(IN,"r",stdin);
    freopen(OUT,"w",stdout);
    int n,k,i,j;
	scanf("%d%d",&n,&k);
    for(i=1;i<=k;++i)
	{
		int j=k-i+1;
		scanf("%d",&v[j]);
	}
	for(i=n;i>=k+1;--i)
		scanf("%d",&v[i]);
	int max=0,nr=0,l=1;
	for(i=1;i<n;++i)
		if(v[i]==v[i+1])
		    l++;
		else
		{
			if(l>max)
			{
				max=l;
				nr=0;
			}
			if(l==max)
				++nr;
			l=1;
		}
	if(l>max)
	{
		max=l;
		nr=0;
	}
	if(l==max)
		++nr;
	printf("%d %d",max,nr);
    return 0;
}
