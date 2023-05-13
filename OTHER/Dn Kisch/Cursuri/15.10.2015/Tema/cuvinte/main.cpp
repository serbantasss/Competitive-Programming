#include <cstdio>
#include <cstring>
const int NMAX=10000;
const int KMAX=30;
#define INF 667

int A[2][NMAX+KMAX];
int M, K, L1, L2;
char s1[NMAX+KMAX+1], s2[NMAX+KMAX+1];
int min(int a,int b)
{
    if(a>b)
      return b;
    else
        return a;
}
int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
	int t, i, j, v = 0, n = 1, pl, total = 0;

	freopen("cuvinte1.in","r",stdin);
	scanf("%d %d", &M, &K);
	scanf("%d %s", &L1, s1+1);

	freopen("cuvinte1.out","w",stdout);
	for (t = 0; t < M; t++)
	{
		scanf("%d %s", &L2, s2+1);
		for (i = 0; i <= K; i++)
			A[v][i] = i;
		A[v][K+1] = INF;

		for (i = 1; i <= L2; i++)
		{
			pl = min(i+K+2, L1+1);

			if (i-K-2 >= 0)
				A[n][i-K-2] = INF;
			else
				A[n][0] = i;

			for (j = max(1, i-K-1); j < pl; j++)
				if (s1[j] == s2[i])
					A[n][j] = A[v][j-1];
				else
				{
					A[n][j] = min(A[v][j],A[v][j-1]);
					A[n][j] = min(A[n][j],A[n][j-1]) + 1;
				}
			A[n][pl] = INF;

			v ^= 1;  n ^= 1;
		}

		printf("%d\n",(A[v][L1]<=K));
	}


	return 0;
}
