#include <bits/stdc++.h>
using namespace std;
pair<int,int> fmm[70005];
vector<pair<int,int> >v[70005];
int mat[255][255];
int main()
{
    //freopen("bile.in","r",stdin);
    //freopen("bile.out","w",stdout);
    int n,i,j,mi,ind,m,x,y,m1,m2,ok,ma;
    scanf("%d",&n);
    for(i=1; i<=n*n; ++i)
        scanf("%d%d",&fmm[i].first,&fmm[i].second);
    ind=n*n;
    m=1;
    mat[fmm[ind].first][fmm[ind].second]=m;
    v[m].push_back(fmm[ind]);
    fmm[ind].first=0;
    ind--;
    ma=1;
    for(; ind>=1; ind--)
    {
        x=fmm[ind].first;
        y=fmm[ind].second;
        fmm[ind].first=ma;
        ok=0;
        if(mat[x-1][y])
        {
            m1=mat[x-1][y];
            mat[x][y]=m1;
            v[m1].push_back(make_pair(x,y));
            if(v[m1].size()>ma)
                ma=v[m1].size();
            ok=1;
        }
        if(mat[x+1][y] || mat[x+1][y]!=m1)
        {
            if(ok==1)
            {
                m2=mat[x+1][y];///m1-ex graph m2-new graph
                if(v[m1].size()<v[m2].size())
                {
                    for(j=0; j<v[m1].size(); ++j)
                    {
                        v[m2].push_back(v[m1][j]);
                        mat[v[m1][j].first][v[m1][j].second]=m2;
                    }
                    if(v[m2].size()>ma)
                        ma=v[m2].size();
                    m1=m2;

                }
                else
                {
                    for(j=0; j<v[m2].size(); ++j)
                    {
                        v[m1].push_back(v[m2][j]);
                        mat[v[m2][j].first][v[m2][j].second]=m1;
                    }
                    if(v[m1].size()>ma)
                        ma=v[m1].size();
                }

            }
            else
            {
                m1=mat[x+1][y];
                mat[x][y]=m1;
                v[m1].push_back(make_pair(x,y));
                if(v[m1].size()>ma)
                    ma=v[m1].size();
                ok=1;
            }
        }
        if(mat[x][y+1]|| mat[x][y+1]!=m1)
        {
            if(ok==1)
            {
                m2=mat[x][y+1];///m1-ex graph m2-new graph
                if(v[m1].size()<v[m2].size())
                {
                    for(j=0; j<v[m1].size(); ++j)
                    {
                        v[m2].push_back(v[m1][j]);
                        mat[v[m1][j].first][v[m1][j].second]=m2;
                    }
                    if(v[m2].size()>ma)
                        ma=v[m2].size();
                    m1=m2;

                }
                else
                {
                    for(j=0; j<v[m2].size(); ++j)
                    {
                        v[m1].push_back(v[m2][j]);
                        mat[v[m2][j].first][v[m2][j].second]=m1;
                    }
                    if(v[m1].size()>ma)
                        ma=v[m1].size();
                }

            }
            else
            {
                m1=mat[x][y+1];
                mat[x][y]=m1;
                v[m1].push_back(make_pair(x,y));
                if(v[m1].size()>ma)
                    ma=v[m1].size();
                ok=1;
            }
        }
        if(mat[x][y-1]|| mat[x][y-1]!=m1)
        {
            if(ok==1)
            {
                m2=mat[x][y-1];///m1-ex graph m2-new graph
                if(v[m1].size()<v[m2].size())
                {
                    for(j=0; j<v[m1].size(); ++j)
                    {
                        v[m2].push_back(v[m1][j]);
                        mat[v[m1][j].first][v[m1][j].second]=m2;
                    }
                    if(v[m2].size()>ma)
                        ma=v[m2].size();
                    m1=m2;

                }
                else
                {
                    for(j=0; j<v[m2].size(); ++j)
                    {
                        v[m1].push_back(v[m2][j]);
                        mat[v[m2][j].first][v[m2][j].second]=m1;
                    }
                    if(v[m1].size()>ma)
                        ma=v[m1].size();
                }

            }
            else
            {
                m1=mat[x][y-1];
                mat[x][y]=m1;
                v[m1].push_back(make_pair(x,y));
                if(v[m1].size()>ma)
                    ma=v[m1].size();
                ok=1;
            }
        }
        if(ok==0)
        {
            m++;
            mat[x][y]=m;
            v[m].push_back(make_pair(x,y));
        }
    }
    for(i=1;i<=n*n;++i)
        printf("%d\n",fmm[i].first);
    return 0;
}
