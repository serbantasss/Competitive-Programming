#include <cstdio>
#include <algorithm>
#define INF 1LL<<40
typedef long long LL;
using namespace std;
LL cost[305][305],dp[305][305];
 
int main()
{
 int i,j,m,n,k,t,x,y,z;
 scanf("%d%d%d",&n,&m,&t);
 for(i=0;i<=n;i++)
  for(j=0;j<=n;j++)
   dp[i][j]=cost[i][j]=INF;
 
 for(i=0;i<m;i++)
 {
  scanf("%d%d%d",&x,&y,&z);
  for(j=x;j<=y;j++)
   cost[x][j]=min(cost[x][j],(LL)z);
 }
 
 dp[0][0]=0;
 for(i=1;i<=n;i++)
  for(j=0;j<=i;j++)
  {
   dp[i][j]=dp[i-1][j];
   for(k=1;k<=j;k++)
    dp[i][j]=min(dp[i][j],dp[i-k][j-k]+cost[i-k+1][i]);
  }
 
 if(dp[n][t]>=INF) dp[n][t]=-1;
 printf("%I64d\n",dp[n][t]);
}