#include <cstdio>
#include <cstring>
#include <cctype>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
vector<int>v;
stack<int>st;
char s[100001];
int rotunda()
{
    int maxim, suma;
    maxim=st.top();
    suma=st.top()>0?st.top():0;
    st.pop();
    while(st.top()!=1000 && !st.empty())
    {
        suma+=st.top() ;
        if (suma>maxim)
            maxim = suma;
        if (suma<0)
            suma=0;
        st.pop();
    }
    return maxim;
}
int dreapta()
{
    v.clear();
    while (st.top() != 2000)
        {v.push_back(st.top());
        st.pop();}
    sort(v.begin(),v.end()) ;
    return v[(v.size()+1)/2-1];
}
int main()
{
    freopen("expresie.in","r",stdin);
    freopen("expresie.out","w",stdout);
    int n,k,ii,vir=0,x,nr=0;
    char ch;
    gets(s);
    n=strlen(s);
    for(ii=0;ii<n;++ii)
        if(s[ii]==',')
            vir++;
    ii=0;
    while(ii<n)
    {
        if(s[ii]=='(')
        {
            st.push(1000);
            ii++;
        }
        else if (s[ii] == '[')
        {
            st.push(2000);
            ii++ ;
        }
        else if (s[ii] == ')')
        {
            x=rotunda() ;
            st.top()=x;
            ii++ ;
        }
        else if (s[ii] == ']')
        {

            x=dreapta();
            st.top()=x;
            ii++;
        }
        else if(s[ii]!=',')
        {
             int semn=1;
            if (s[ii]=='-')
            {
                semn=-1;
                ii++;
            }
            x=0;
            while(ii<n && isdigit(s[ii]))
                x=x*10+(s[ii++]-'0');
            x=x*semn;
            st.push(x);
        }
        else
            ii++;
    }

    int suma = 0 ;
    while(!st.empty())
    {
        suma+=st.top();
        st.pop();
    }
    printf("%d\n%d",vir+1,suma);
    return 0;
}
