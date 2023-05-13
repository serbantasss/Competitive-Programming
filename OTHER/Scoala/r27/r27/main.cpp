//
//  main.cpp
//  r27
//
//  Created by Serban Bantas on 17/12/2019.
//  Copyright © 2019 Serban Bantas. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
vector<string> v;
string cifre[10];
int main(int argc, const char * argv[]) {
    int n,i;
    cin>>n;
    for(i=1;i<=n;++i)
    {
        string nc;
        cin>>nc;
        v.push_back(nc);
    }
    for(i=0;i<=9;++i)
        cin>>cifre[i];
    for(i=0;i<n;++i)
    {
        string result;
        while(!v[i].empty())
        {
            size_t found;
            for(int j=0;j<=9;++j)
            {
                found=v[i].find(cifre[j]);
                if(found!=string::npos && found==0)
                {
                    result+=char(j+'0');
                    v[i].erase(0,cifre[j].size());
                    break;
                }
            }
        }
        cout<<result<<"\n";
    }
    return 0;
}
