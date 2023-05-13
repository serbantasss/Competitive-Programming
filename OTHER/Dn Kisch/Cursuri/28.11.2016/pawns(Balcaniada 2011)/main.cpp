#include <cstdio>
#include <cstring>
using namespace std;
struct PAWN
{
    int x,l;
};
int n,viz[1600000];
PAWN q[1600000];
PAWN temp;
int i,j,ci,cf,nr2=0,nr1=0,nr,p,u,v[690000],vt[15],vf[15],ok=1;
int conv310(int v[])
{
    int nr=0,p3=1;
    for(int ii=n; ii>=1; --ii)
    {
        nr=nr+v[ii]*p3;
        p3*=3;
    }
    return nr;
}
void conv103(int v[],int nr)
{
    int rest,ii=n;
    while(nr)
    {
        rest=nr%3;
        nr-=rest;
        v[ii--]=rest;
        nr/=3;
    }
}
int main()
{
    freopen("pawns.in","r",stdin);
    freopen("pawns.out","w",stdout);
    scanf("%d",&n);
    for(i=1; i<=n; ++i)
    {
        scanf("%d",&v[i]);
        if(v[i]==2)
            nr2++;
        if(v[i]==1)
            nr1++;
    }
    ci=conv310(v);
    for(i=1; i<=n; ++i)
        v[i]=0;
    for(i=1; i<=nr1; ++i)
        v[i]=1;
    for(i=n; i>n-nr2; --i)
        v[i]=2;
    cf=conv310(v);
    p=u=1;
    viz[ci]=-1;
    temp.x=ci;
    temp.l=0;
    q[u]=temp;
    ok=0;
    while(p<=u && !ok)
    {
        temp=q[p];
        p++;
        memset(vt,0,sizeof(vt));
        conv103(vt,temp.x);
        ///negre
        for(i=1; i<=n; ++i)
        {
            if(vt[i]==2)
            {
                memcpy(vf,vt,sizeof(vt));
                if(vf[i+1]==0 && i<n)
                {
                    vf[i+1]=2;
                    vf[i]=0;
                    nr=conv310(vf);
                    if(!viz[nr])
                    {
                        ++u;
                        q[u].l=temp.l+1;
                        q[u].x=nr;
                        viz[nr]=temp.x;
                        if(q[u].x==cf)
                        {
                            ok=1;
                            break;
                        }
                    }
                }
                else if(vf[i+2]==0 && vf[i+1]!=0 && i<n-1)
                {
                    vf[i+2]=2;
                    vf[i]=0;
                    nr=conv310(vf);
                    if(!viz[nr])
                    {
                        ++u;
                        q[u].l=temp.l+1;
                        q[u].x=nr;
                        viz[nr]=temp.x;
                        if(q[u].x==cf)
                        {
                            ok=1;
                            break;
                        }
                    }
                }
            }
        }
        ///albi
        for(i=1; i<=n && !ok; ++i)
        {
            if(vt[i]==1)
            {
                memcpy(vf,vt,sizeof(vt));
                if(vf[i-1]==0 && i>1)
                {
                    vf[i-1]=1;
                    vf[i]=0;
                    nr=conv310(vf);
                    if(!viz[nr])
                    {
                        ++u;
                        q[u].l=temp.l+1;
                        q[u].x=nr;
                        viz[nr]=temp.x;
                        if(q[u].x==cf)
                        {
                            ok=1;
                            break;
                        }
                    }
                }
                else if(vf[i-2]==0 && vf[i-1]!=0 && i>2)
                {
                    vf[i-2]=1;
                    vf[i]=0;
                    nr=conv310(vf);
                    if(!viz[nr])
                    {
                        ++u;
                        q[u].l=temp.l+1;
                        q[u].x=nr;
                        viz[nr]=temp.x;
                        if(q[u].x==cf)
                        {
                            ok=1;
                            break;
                        }
                    }
                }
            }
        }
    }
    printf("%d %d\n",q[u].l);
    int x=q[u].x;
    j=q[u].l;
    while(x)
    {
        memset(vt,0,sizeof(vt));
        memset(vf,0,sizeof(vf));
        if(viz[x]>0)
        {
            conv103(vt,x);
            conv103(vf,viz[x]);
        }
        else
            break;
        for(i=1; i<=n; ++i)
            if(vt[i]!=vf[i] && vt[i]==0)
        {
            v[j--]=i;
            break;
        }
        x=viz[x];
    }
    for(i=1;i<=q[u].l;++i)
        printf("%d ",v[i]);
    return 0;
}
