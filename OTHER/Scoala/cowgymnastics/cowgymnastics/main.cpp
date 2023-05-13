//
//  main.cpp
//  cowgymnastics
//
//  Created by Serban Bantas on 14/12/2019.
//  Copyright © 2019 Serban Bantas. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
char s[105];
map<string,int> mp;
pair<int,int> reguli[10];
int poz[]={1,2,3,4,5,6,7,8};
bool respecta(int reg)
{
    for(int i=1;i<=reg;++i)
    {
        int poz1,poz2;
        for(int j=0;j<8;++j)
                if(poz[j]==reguli[i].first)
                   poz1=j;
                else
                    if(poz[j]==reguli[i].second)
                        poz2=j;
        if(poz1-1!=poz2 && poz1+1!=poz2)
            return 0;
    }
    return 1;
}
void afiseaza()
{
    for(int i=0;i<8;++i)
    {
        if(poz[i]==1)
            printf("Beatrice\n");
        if(poz[i]==2)
            printf("Belinda\n");
        if(poz[i]==3)
            printf("Bella\n");
        if(poz[i]==4)
            printf("Bessie\n");
        if(poz[i]==5)
            printf("Betsy\n");
        if(poz[i]==6)
            printf("Blue\n");
        if(poz[i]==7)
            printf("Buttercup\n");
        if(poz[i]==8)
            printf("Sue\n");
    }
}
int main(int argc, const char * argv[]) {
        freopen("lineup.in","r",stdin);
        freopen("lineup.out","w",stdout);
    int reg,ind;
    scanf("%d",&reg);
    string pb ("Beatrice");
    mp[pb]=1;
    pb="Belinda";
    mp[pb]=2;
    pb="Bella";
    mp[pb]=3;
    pb="Bessie";
    mp[pb]=4;
    pb="Betsy";
    mp[pb]=5;
    pb="Blue";
    mp[pb]=6;
    pb="Buttercup";
    mp[pb]=7;
    pb="Sue";
    mp[pb]=8;
    for(int i=1;i<=reg;++i)
    {
        scanf("\n");
        gets(s);
        string nume;
        ind=0;
        while(s[ind]!=' ')
            nume+=s[ind++];
        reguli[i].first=mp[nume];
        ind=strlen(s);
        while(s[ind-1]!=' ')
            ind--;
        nume.clear();
        while(s[ind]!='\0')
            nume+=s[ind++];
        reguli[i].second=mp[nume];
    }
    do
    {
        if(respecta(reg))
        {
            afiseaza();
            return 0;
        }
    }while(next_permutation(poz,poz+8));
    return 0;
}
