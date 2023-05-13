#include <cstdio>
#include <string>
#include <cstring>
#include <algorithm>
#include <stack>

using namespace std;
stack<char>st;
int i,j,n,k,ind;
char s[1005],cs[1005];
void uitate()
{
    if(st.empty()==0)
    {
        if(st.top()==cs[ind])
        {
            st.pop();
            ind++;
            uitate();
        }
        else if(i>0)
        {
            if(s[i]==cs[ind])
            {
                ind++;
                i--;
                uitate();
            }
        }
    }
    else if(i>0)
    {
        if(s[i]==cs[ind])
        {
            ind++;
            i--;
            uitate();
        }
    }
}
int main()
{
    freopen("cuvinte.in","r",stdin);
    freopen("cuvinte.out","w",stdout);
    ///1
    gets(s);
    strcpy(cs,s);
    n=strlen(s);
    sort(cs,cs+n);
    ind=0;
    i=n-1;
    k=0;
    while(i>=0)
        if(s[i]==cs[ind])
        {
            ind++;
            i--;
            uitate();
        }
        else
        {
            st.push(s[i--]);
        }
    printf("%d\n",ind);
    ///2
    gets(s);
    strcpy(cs,s);
    n=strlen(s);
    sort(cs,cs+n);
    ind=0;
    i=n-1;
    k=0;
    while(i>=0)
        if(s[i]==cs[ind])
        {
            ind++;
            i--;
            uitate();
        }
        else
        {
            st.push(s[i--]);
        }
    printf("%d\n",ind);
    ///3
    gets(s);
    strcpy(cs,s);
    n=strlen(s);
    sort(cs,cs+n);
    ind=0;
    i=n-1;
    k=0;
    while(i>=0)
        if(s[i]==cs[ind])
        {
            ind++;
            i--;
            uitate();
        }
        else
        {
            st.push(s[i--]);
        }
    printf("%d\n",ind);
    return 0;
}
