#include <fstream>
#include <iostream>
using namespace std;
ifstream i("munte3.in");
ofstream o("munte3.out");
int v[105];
int main()
{
    int n,i,st,dr,nr=0,l=0,lmax=0;
    cin>>n;
    for(i=1; i<=n; ++i)
        cin>>v[i];
    for(st=1,dr=1; dr<=n,st<=n; ++dr)
    {
        if(v[st]<=v[dr])
        {
            if(v[dr]<v[dr+1])
                {
                    cout<<v[dr]<<" ";
                    l++;
                }
            else
                for(i=dr; i<=n; ++i)
                    if(v[dr]>=v[i])
                        {
                        cout<<v[i]<<" ";
                        dr=i;
                        i++;
                        }
                    else
                    {
                        st++;dr=st-1;
                        if(l>lmax)
                            lmax=l;
                        if(l==lmax)
                            nr++;
                        l=0;
                        cout<<endl;
                        break;
                    }
        }
        else
            st++,dr=st-1;
    }
    cout<<endl<<endl<<nr;
    return 0;
}
