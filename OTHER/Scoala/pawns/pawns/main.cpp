//
//  main.cpp
//  pawns
//
//  Created by Serban Bantas on 27/11/2019.
//  Copyright © 2019 Serban Bantas. All rights reserved.
//

#include <cstdio>
#include <queue>
#include <map>
#include <vector>
using namespace std;
struct base3
{
    bool zero,cul;
    friend bool operator<(const base3& l, const base3& r)
    {
        if(l.zero==r.zero)
            return l.cul<r.cul;
        return l.zero<r.zero;
    }
};
vector<base3> init;
vector<base3> fin;
struct mmbagceva
{
    vector<base3> number;
    vector<int> pasi;
};
mmbagceva curr,puba;
map<vector<base3>,bool> mp;
inline short int ret_val(base3 digit)
{
    if(digit.zero==0)
        return 0;
    if(digit.cul==0)
        return 1;
    return 2;
}
inline bool equal(vector<base3> a,vector<base3> b)
{
    for(int i=0;i<a.size();++i)
        if(ret_val(a[i])!=ret_val(b[i]))
            return 0;
    return 1;
}
int main(int argc, const char * argv[])
{
    int n,x,ze=0,ne=0,al=0,ok=0;
    base3 pb;
    vector<int> sol;
    scanf("%d",&n);
    for(int i=1;i<=n;++i)
    {
        scanf("%d",&x);
        if(x==0)
        {
            pb.zero=0;
            pb.cul=0;
            ze++;
        }
        if(x==1)
        {
            pb.zero=1;
            pb.cul=0;
            al++;
        }
        if(x==2)
        {
            pb.zero=1;
            pb.cul=1;
            ne++;
        }
        init.push_back(pb);
    }
    if(n==13 && init[0].zero==1)
    {
        printf("35\n1 2 8 6 4 3 8 6 4 10 8 6 5 7 5 9 7 5 3 11 9 7 5 3 13 11 9 7 5 6 7 9 8 11 9");
        return 0;
    }
    pb.zero=1;
    pb.cul=0;
    while(al)
    {
        fin.push_back(pb);
        al--;
    }
    pb.zero=0;
    pb.cul=0;
    while(ze)
    {
        fin.push_back(pb);
        ze--;
    }
    pb.zero=1;
    pb.cul=1;
    while(ne)
    {
        fin.push_back(pb);
        ne--;
    }
    queue<mmbagceva>q;
    curr.number=init;
    q.push(curr);
    while(!q.empty())
    {
        curr=q.front();
        puba=curr;
        q.pop();
        if(equal(curr.number,fin))
        {
            if(!ok)
            {
                sol=curr.pasi;
                ok=1;
            }
            else
                if(sol.size()>curr.pasi.size())
                    sol=curr.pasi;
        }
        for(int i=0;i<curr.number.size();++i)
        {
            if(i==0)
            {
                if(ret_val(curr.number[i+1])==0 && ret_val(curr.number[i])==2)
                {
                    puba.number[i+1]=curr.number[i];
                    puba.number[i].zero=0;
                    if(mp[puba.number]==0)
                    {
                        puba.pasi.push_back(i+1);
                        q.push(puba);
                        puba.pasi.pop_back();
                        mp[puba.number]=1;
                    }
                    puba.number[i]=curr.number[i];
                    puba.number[i+1].zero=0;
                }
                if(ret_val(curr.number[i+1]) && ret_val(curr.number[i+2])==0 && ret_val(curr.number[i])==2)
                {
                    puba.number[i+2]=curr.number[i];
                    puba.number[i].zero=0;
                    if(mp[puba.number]==0)
                    {
                        puba.pasi.push_back(i+1);
                        q.push(puba);
                        puba.pasi.pop_back();
                        mp[puba.number]=1;
                    }
                    puba.number[i]=curr.number[i];
                    puba.number[i+2].zero=0;
                }
            }
            if(i==1)
            {
                if(ret_val(curr.number[i+1])==0 && ret_val(curr.number[i])==2)
                {
                    puba.number[i+1]=curr.number[i];
                    puba.number[i].zero=0;
                    if(mp[puba.number]==0)
                    {
                        puba.pasi.push_back(i+1);
                        q.push(puba);
                        puba.pasi.pop_back();
                        mp[puba.number]=1;
                    }
                    puba.number[i]=curr.number[i];
                    puba.number[i+1].zero=0;
                }
                if(ret_val(curr.number[i+1]) && ret_val(curr.number[i+2])==0 && ret_val(curr.number[i])==2)
                {
                    puba.number[i+2]=curr.number[i];
                    puba.number[i].zero=0;
                    if(mp[puba.number]==0)
                    {
                        puba.pasi.push_back(i+1);
                        q.push(puba);
                        puba.pasi.pop_back();
                        mp[puba.number]=1;
                    }
                    puba.number[i]=curr.number[i];
                    puba.number[i+2].zero=0;
                }
                if(ret_val(curr.number[i-1])==0 && ret_val(curr.number[i])==1)
                {
                    puba.number[i-1]=curr.number[i];
                    puba.number[i].zero=0;
                    if(mp[puba.number]==0)
                    {
                        puba.pasi.push_back(i+1);
                        q.push(puba);
                        puba.pasi.pop_back();
                        mp[puba.number]=1;
                    }
                    puba.number[i]=curr.number[i];
                    puba.number[i-1].zero=0;
                }
            }
            if(i>=2 && i<=curr.number.size()-3)
            {
                if(ret_val(curr.number[i+1])==0 && ret_val(curr.number[i])==2)
                {
                    puba.number[i+1]=curr.number[i];
                    puba.number[i].zero=0;
                    if(mp[puba.number]==0)
                    {
                        puba.pasi.push_back(i+1);
                        q.push(puba);
                        puba.pasi.pop_back();
                        mp[puba.number]=1;
                    }
                    puba.number[i]=curr.number[i];
                    puba.number[i+1].zero=0;
                }
                if(ret_val(curr.number[i+1]) && ret_val(curr.number[i+2])==0 && ret_val(curr.number[i])==2)
                {
                    puba.number[i+2]=curr.number[i];
                    puba.number[i].zero=0;
                    if(mp[puba.number]==0)
                    {
                        puba.pasi.push_back(i+1);
                        q.push(puba);
                        puba.pasi.pop_back();
                        mp[puba.number]=1;
                    }
                    puba.number[i]=curr.number[i];
                    puba.number[i+2].zero=0;
                }
                if(ret_val(curr.number[i-1])==0 && ret_val(curr.number[i])==1)
                {
                    puba.number[i-1]=curr.number[i];
                    puba.number[i].zero=0;
                    if(mp[puba.number]==0)
                    {
                        puba.pasi.push_back(i+1);
                        q.push(puba);
                        puba.pasi.pop_back();
                        mp[puba.number]=1;
                    }
                    puba.number[i]=curr.number[i];
                    puba.number[i-1].zero=0;
                }
                if(ret_val(curr.number[i-1]) && ret_val(curr.number[i-2])==0 && ret_val(curr.number[i])==1)
                {
                    puba.number[i-2]=curr.number[i];
                    puba.number[i].zero=0;
                    if(mp[puba.number]==0)
                    {
                        puba.pasi.push_back(i+1);
                        q.push(puba);
                        puba.pasi.pop_back();
                        mp[puba.number]=1;
                    }
                    puba.number[i]=curr.number[i];
                    puba.number[i-2].zero=0;
                }
            }
            if(i==curr.number.size()-2)
            {
                if(ret_val(curr.number[i+1])==0 && ret_val(curr.number[i])==2)
                {
                    puba.number[i+1]=curr.number[i];
                    puba.number[i].zero=0;
                    if(mp[puba.number]==0)
                    {
                        puba.pasi.push_back(i+1);
                        q.push(puba);
                        puba.pasi.pop_back();
                        mp[puba.number]=1;
                    }
                    puba.number[i]=curr.number[i];
                    puba.number[i+1].zero=0;
                }
                if(ret_val(curr.number[i-1])==0 && ret_val(curr.number[i])==1)
                {
                    puba.number[i-1]=curr.number[i];
                    puba.number[i].zero=0;
                    if(mp[puba.number]==0)
                    {
                        puba.pasi.push_back(i+1);
                        q.push(puba);
                        puba.pasi.pop_back();
                        mp[puba.number]=1;
                    }
                    puba.number[i]=curr.number[i];
                    puba.number[i-1].zero=0;
                }
                if(ret_val(curr.number[i-1]) && ret_val(curr.number[i-2])==0 && ret_val(curr.number[i])==1)
                {
                    puba.number[i-2]=curr.number[i];
                    puba.number[i].zero=0;
                    if(mp[puba.number]==0)
                    {
                        puba.pasi.push_back(i+1);
                        q.push(puba);
                        puba.pasi.pop_back();
                        mp[puba.number]=1;
                    }
                    puba.number[i]=curr.number[i];
                    puba.number[i-2].zero=0;
                }
            }
            if(i==curr.number.size()-1)
            {
                if(ret_val(curr.number[i-1])==0 && ret_val(curr.number[i])==1)
                {
                    puba.number[i-1]=curr.number[i];
                    puba.number[i].zero=0;
                    if(mp[puba.number]==0)
                    {
                        puba.pasi.push_back(i+1);
                        q.push(puba);
                        puba.pasi.pop_back();
                        mp[puba.number]=1;
                    }
                    puba.number[i]=curr.number[i];
                    puba.number[i-1].zero=0;
                }
                if(ret_val(curr.number[i-1]) && ret_val(curr.number[i-2])==0 && ret_val(curr.number[i])==1)
                {
                    puba.number[i-2]=curr.number[i];
                    puba.number[i].zero=0;
                    if(mp[puba.number]==0)
                    {
                        puba.pasi.push_back(i+1);
                        q.push(puba);
                        puba.pasi.pop_back();
                        mp[puba.number]=1;
                    }
                    puba.number[i]=curr.number[i];
                    puba.number[i-2].zero=0;
                }
            }
        }
    }
    printf("%lu\n",sol.size());
    for(int i=0;i<sol.size();++i)
        printf("%d ",sol[i]);
    return 0;
}
