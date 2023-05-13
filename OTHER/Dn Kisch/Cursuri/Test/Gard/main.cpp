#include <cstdio>

using namespace std;
int f[100005];
int v[32];
int main()
{
	freopen("gard.in","r",stdin);
    freopen("gard.out","w",stdout);
    int n,k,p,m,cn,nc,maxc=1,j,i,c;
    scanf("%d%d",&n,&p);
    cn=n;
    for(i=1;i<=p;++i)
    {
    	scanf("%d",&k);
    	nc=1;
    	while(n)
    	{
    		v[nc]=n%k;
    		++nc;
    		n/=k;
    	}
    	nc--;
    	int pk=1;
    	for(j=1;j<nc;j++)
    		pk=pk*k;
    		c=0;
    		for(j=nc;j>=1;--j)
				{while(v[j]!=0)
				{++c;
					f[c] = f[c] + pk;
					v[j]--;
				}

				pk/=k;}
    	if(c>maxc)
			maxc=c;
    	n=cn;
    }
    printf("%d\n",maxc);
    for(i=1;i<=maxc;++i)
		printf("%d ",f[i]);
    return 0;
}
