//
//  main.cpp
//  aranjamente
//
//  Created by Serban Bantas on 27/02/2020.
//  Copyright © 2020 Serban Bantas. All rights reserved.
//

#include <vector>
#include <cstdio>
using namespace std;
int v[200005], n,N,p0=0,sf1=0;
vector<int>perm;
inline bool verif()
{
    for(int i=1;i<=n;++i)
        if(v[i]!=1)
            return 0;
    if(v[n+1]!=0)
    {
        swap(v[p0],v[n+1]);
        swap(v[p0+1],v[n+2]);
        p0=n+1;
        perm.push_back(n+1);
    }
    return 1;
}
int main(int argc, const char * argv[])
{
    freopen("aranjare.in","r",stdin);
    freopen("aranjare.out","w",stdout);
    scanf("%d\n",&n);
    N=2*n+2;
    for(int i=1;i<=N;++i)
    {
        char ch;
        scanf("%c",&ch);
        if(ch=='F')
            v[i]=1;
        if(ch=='B')
            v[i]=2;
        if(ch=='S' && p0==0)
            p0=i;
        //        scanf("%1d",&v[i]);
        //        if(v[i]==0 && !p0)
        //            p0=i;
    }
    if(verif())
    {
        swap(v[p0],v[1]);
        swap(v[p0+1],v[2]);
        swap(v[1],v[p0]);
        swap(v[2],v[p0+1]);
        for(int i=0;i<perm.size();++i)
            printf("%d\n",perm[i]);
        printf("1\n%d\n",p0);
        return 0;
    }
    if(v[1]==2)
    {
        swap(v[1],v[p0]);
        swap(v[2],v[p0+1]);
        p0=1;
        sf1=1;
        perm.push_back(1);
    }
    else
    {
        for(int i=1;i<=N && !sf1;++i)
            if(v[i]!=1)
                sf1=i;
        if(v[sf1]==2 && v[sf1+1]==0)
        {
            int i;
            for(i=sf1+1;i<=N && sf1;++i)
                if(v[i]==2)
                    break;
            perm.push_back(i);
            swap(v[i],v[p0]);
            swap(v[i+1],v[p0+1]);
            p0=i;
            perm.push_back(sf1);
            swap(v[sf1],v[p0]);
            swap(v[sf1+1],v[p0+1]);
            p0=sf1;
        }
    }
    while(!verif())
    {
        int ind=0,oksf=0,ok0=0;
        for(int i=sf1;i<=N && !ind;++i)
            if(v[i]==1)
            {
                ind=i;
                if(i==N)
                    oksf=1;
                else
                    if(v[i+1]==0)
                        ok0=1;
            }
        if(oksf)
        {
            if(p0==N-2)
            {
                swap(v[sf1],v[p0]);
                swap(v[sf1+1],v[p0+1]);
                perm.push_back(sf1);
                p0=sf1;
            }
            //1
            swap(v[N-1],v[p0]);
            swap(v[N],v[p0+1]);
            perm.push_back(N-1);
            p0=N-1;
            //2
            swap(v[sf1-2],v[p0]);
            swap(v[sf1-1],v[p0+1]);
            perm.push_back(sf1-2);
            p0=sf1-2;
            //3
            swap(v[sf1+1],v[p0]);
            swap(v[sf1+2],v[p0+1]);
            perm.push_back(sf1+2);
            p0=sf1+1;
            //4
            swap(v[sf1-1],v[p0]);
            swap(v[sf1],v[p0+1]);
            perm.push_back(sf1-1);
            p0=sf1-1;
            //5
            swap(v[N-1],v[p0]);
            swap(v[N],v[p0+1]);
            perm.push_back(N-1);
            p0=N-1;
            continue;
        }
        if(ok0)
        {
            swap(v[ind-1],v[p0]);
            swap(v[ind],v[p0+1]);
            perm.push_back(ind-1);
            p0=ind-1;
            continue;
        }
        swap(v[ind],v[p0]);
        swap(v[ind+1],v[p0+1]);
        perm.push_back(ind);
        p0=ind;
        while(v[sf1]==1)
            sf1++;
        if(v[sf1]==2)
        {
            if(v[sf1+1]==0)
            {
                int i;
                for(i=sf1+1;i<=N && sf1;++i)
                    if(v[i]==2)
                        break;
                perm.push_back(i);
                swap(v[i],v[p0]);
                swap(v[i+1],v[p0+1]);
                p0=i;
                perm.push_back(sf1);
                swap(v[sf1],v[p0]);
                swap(v[sf1+1],v[p0+1]);
                p0=sf1;
            }
            else
            {
                swap(v[sf1],v[p0]);
                swap(v[sf1+1],v[p0+1]);
                perm.push_back(sf1);
                p0=sf1;
            }
        }
    }
    for(int i=0;i<perm.size();++i)
        printf("%d\n",perm[i]);
    return 0;
}
