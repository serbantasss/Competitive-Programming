#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char sir[105],cuv[105],ch;
    int  n,len=0,steag=0,i,j;
    cin.getline(sir,100);
    n=strlen(sir);
    for(j=0;j<=n;++j)
    {
        ch=sir[j];
        if(ch==' ' || ch=='\n')
        {
            if(len%2==1)
            {
                steag=1;
                for(i=0;i<len;++i)
                    if(i!=len/2)
                        cout<<cuv[i];
            }
            else
                for(i=0;i<len;++i)
                    cout<<cuv[i];
            if(ch=='\n')
                break;
            len=0;
            cout<<" ";
        }
        else
            cuv[len++]=ch;
    }
    if(steag==0)
        cout<<"Nu exista";
    return 0;
}
