#include <cstdio>

using namespace std;

int main()
{
    freopen("stricat.in","r",stdin);
    freopen("stricat.out","w",stdout);
    int n,a,b,x,prev,i;
    bool ok=true;
    scanf("%d",&n);
    a=b=-1;
    scanf("%d",&prev);
    for(i=2;i<=n;++i)
	{
		scanf("%d",&x);
		if(x<=prev && ok==true)
		{
			a=i-1;
			ok=false;
		}
		if(x==prev && ok==false)
			b=i;
		if(x>prev && ok==false)
			b=i-1,ok=true;
		prev=x;
	}
	if(b==-1)
		b=n;
	if(a==-1)
		a=1;
	printf("%d %d",a,b);
    return 0;
}
