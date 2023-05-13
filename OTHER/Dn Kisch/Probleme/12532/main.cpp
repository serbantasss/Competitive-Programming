#include <cstdio>
#include <vector>
using namespace std;

int x[100005];

int LSOne(int n) {
	return n & (-n);
}

class FT {
private:
	vector<int> ft;

public:
	FT(int n) {
		ft.assign(n + 1, 0);
	}
	int rsq(int b) {
		int sum = 0;
		for (; b; b -= LSOne(b))
			sum += ft[b];
		return sum;
	}
	int rsq(int a, int b) {
		return rsq(b) - (a == 1 ? 0 : rsq(a - 1));
	}

	void adjust(int k, int v) {
		for (; k < (int) ft.size(); k += LSOne(k)) {
			ft[k] += v;
		}
	}
};

int main() {
	int n, k, d1, d2;
	char q;

	while (scanf("%d %d", &n, &k) != EOF) {
		FT ftNeg(n), ftZero(n);

		for (int i = 1; i <= n; i++) {
			scanf("%d", &x[i]);
			if (x[i] < 0)
				ftNeg.adjust(i, 1);
			if (x[i] == 0)
				ftZero.adjust(i, 1);
		}

		for (int i = 0; i < k; i++) {
			scanf("%c", &q);
			while (q != 'P' && q != 'C')
				scanf("%c", &q);
			scanf("%d %d", &d1, &d2);

			if (q == 'P') {
				if (ftZero.rsq(d1, d2)) {
					printf("0");
				} else if (ftNeg.rsq(d1, d2) % 2 == 0) {
					printf("+");
				} else {
					printf("-");
				}
			} else if (q == 'C') {
				if (x[d1] >= 0 && d2 < 0)
					ftNeg.adjust(d1, 1);
				else if (x[d1] < 0 && d2 >= 0)
					ftNeg.adjust(d1, 1);

				if (x[d1] != 0 && d2 == 0)
					ftZero.adjust(d1, 1);
				else if (x[d1] == 0 && d2 != 0)
					ftZero.adjust(d1, -1);

				x[d1] = d2;
			}
		}

		printf("\n");
	}

	return 0;
}#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
struct intt
{
    int negative;
    bool nule;
};
int v[100005];
intt aint[400020];
int n,m;
intt sol;
void build(int nod,int st,int dr)
{
    if(st==dr)
    {
        ///aint[nod]=v[st];
        if(v[st]==0)
            aint[nod].nule=1;
        if(v[st]<0)
            aint[nod].negative=1;
    }
    else
    {
        int med=(st+dr)/2;
        build(2*nod,st,med);
        build(2*nod+1,med+1,dr);
        ///aint[nod]=max(aint[2*nod],aint[2*nod+1]);
        aint[nod].negative=aint[2*nod].negative+aint[2*nod+1].negative;
        if(aint[2*nod].nule==1 || aint[2*nod+1].nule==1)
            aint[nod].nule=1;
    }
}
void update(int nod,int st,int dr,int pozv,int new_val)
{
    if(st==dr)
    {
        if(new_val==0)
        {
            aint[nod].negative=0;
            aint[nod].nule=1;
        }
        if(new_val>0)
        {
            aint[nod].negative=aint[nod].nule=0;
        }
        if(new_val<0)
        {
            aint[nod].negative=1;
            aint[nod].nule=0;
        }
    }
    else
    {
        int med=(st+dr)/2;
        if(pozv<=med)
            update(2*nod,st,med,pozv,new_val);
        if(pozv>=med+1)
            update(2*nod+1,med+1,dr,pozv,new_val);
        ///aint[nod]=max(aint[2*nod],aint[2*nod+1]);
        aint[nod].negative=aint[2*nod].negative+aint[2*nod+1].negative;
        if(aint[2*nod].nule==1 || aint[2*nod+1].nule==1)
            aint[nod].nule=1;
        else
            if(aint[2*nod].nule==0 && aint[2*nod+1].nule==0)
                aint[nod].nule=0;
    }
}
void query(int nod,int st,int dr,int a,int b)
{
    if(a<=st && dr<=b)
    {
        ///sol=max(sol,aint[nod]);
        sol.negative=sol.negative+aint[nod].negative;
        if(aint[nod].nule==1)
            sol.nule=1;
    }
    else
    {
        int med=(st+dr)/2;
        if(a<=med)
            query(2*nod,st,med,a,b);
        if(b>=med+1)
            query(2*nod+1,med+1,dr,a,b);
    }
}
int main()
{
   // freopen("1.in","r",stdin);
   // freopen("1.out","w",stdout);
    int i,j,x,y,z;
    char ch;
    while(scanf("%d %d\n",&n,&m)!=EOF)
    {
        sol.negative=0;
        sol.nule=0;
        for(i=0;i<2*(n+5);++i)
        {
            aint[i]=sol;
        }
        memset(v,0,sizeof(v));
        for(i=1; i<=n; ++i)
        {
            scanf("%d \n",&v[i]);
        }
        build(1,1,n);
        for(i=1;i<=m;++i)
        {
            scanf("%c %d %d\n",&ch,&x,&y);
            if(ch=='C')
            {
                update(1,1,n,x,y);
            }
            else
            {
                sol.negative=0;
                sol.nule=0;
                query(1,1,n,x,y);
                if(sol.nule==1)
                    printf("0");
                else
                {
                    if(sol.negative%2==0)
                        printf("+");
                    else
                        printf("-");
                }
            }
        }
        printf("\n");
    }
    return 0;
}

