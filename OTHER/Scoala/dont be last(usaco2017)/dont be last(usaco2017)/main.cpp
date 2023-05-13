//
//  main.cpp
//  dont be last(usaco2017)
//
//  Created by Serban Bantas on 13/12/2019.
//  Copyright © 2019 Serban Bantas. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
map<string,int> mp;
int main(int argc, const char * argv[])
{
    ifstream cin("notlast.in");
    ofstream cout("notlast.out");
    int n,i,a,mi=INT_MAX,mi1=INT_MAX,ok=0;
    cin>>n;
    string s;
    mp["Bessie"]=0;
    mp["Elsie"]=0;
    mp["Daisy"]=0;
    mp["Gertie"]=0;
    mp["Annabelle"]=0;
    mp["Maggie"]=0;
    mp["Henrietta"]=0;
    for(i=1;i<=n;++i)
    {
        cin>>s>>a;
        mp[s]+=a;
    }
    map<string,int>::iterator it;
    for(it=mp.begin();it!=mp.end();++it)
        if(it->second < mi)
            mi=it->second;
    for(it=mp.begin();it!=mp.end();++it)
        if(it->second < mi1 && it->second != mi)
            mi1=it->second,ok=1;
        else
            if(it->second == mi1 )
                ok++;
    if(ok!=1)
        cout<<"Tie";
    else
    {
        for(it=mp.begin();it!=mp.end();++it)
            if(it->second == mi1)
                cout<<it->first;
    }
    return 0;
}
