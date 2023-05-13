# include<cstdio>
using namespace std;
int v[3000001];
int main()
{
    freopen("majoritar.in","r",stdin);
    freopen("majoritar.out","w",stdout);
    int n,i, vot = 1,cand;
    scanf("%d",&n);
    for(i=1; i<=n; ++i)
        scanf("%d", &v[i]);
    cand=v[i];
    for(i=2;i<=n; i++)
    {
        if(cand==v[i])
            vot++;
        else
            vot--;
        if(vot==0)
        {
            cand=v[i];
            vot=1;
        }
    }
    vot=0;
    for (i = 1; i <=n; i++)
        if(v[i] == cand)
            vot++;
    if(vot>n/2)
        printf("%d %d", cand,vot);
    else
        printf("-1");
    return 0;
}
