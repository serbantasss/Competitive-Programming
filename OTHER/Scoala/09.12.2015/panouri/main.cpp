#include<fstream>
#include<iostream>
using namespace std;
int v[ 200005 ],tipsecv[ 20005 ],tip[ 20005 ];
ifstream in ("panouri.in");
ofstream out("panouri.out");
int main()
{
    int n,i,T,x,nr1=0,p,u,min=2000000;
    in>>n>>T;
    for(i=1; i<=n; i++)
        in>>v[ i ];
    for(i=1; i<=T; i++)
    {
        in>>x;
        tip [ x ] ++;
    }
    int st=1,dr=1;
    if(tip[v[1]])
        nr1=1;
    else
        nr1=0;
    tipsecv[v[1]]++;
    while(dr<=n)
    {
        while(st<=dr && nr1==T)
        {
            if(dr-st<min)
                min=dr-st;
            tipsecv[v[st]]--;
            if(tip[v[st]] && tipsecv[v[st]]==0)
                nr1--;
            st++;
        }
        while( dr <= n && nr1 != T )
        {
            dr++;
            tipsecv[ v [ dr ] ]++;
            if(tip [ v[ dr ] ] && tipsecv [ v [ dr ] ] == 1)
                nr1++;
        }
    }
    if(min!=2000000)
        out<<min<<endl;
    else
        out<<"-1"<<endl;
    return 0;
}
