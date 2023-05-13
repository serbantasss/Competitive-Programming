#include <cstdio>
#include <stack>
#include <cstring>

using namespace std;

char ch;
stack <char> st;

long n;
char s[256];

int main()
{
    freopen("paranteze3.in","r",stdin);
    freopen("paranteze3.out","w",stdout);

    scanf("%ld\n",&n);

    for(long i=1;i<=n;i++)
    {
        gets(s);
        for(long j=0;j<strlen(s);j++)
        {
            if(s[j]=='('|| s[j]=='[')
                st.push(s[j]);
            else if(!st.empty() && ((s[j]==')' && st.top()=='(') || (s[j]==']' && st.top()=='[')))
                st.pop();
            else st.push(s[j]);
        }
        if(st.empty () )
            printf("1\n");
        else
            printf("0\n");
        while(!st.empty())
            st.pop();
    }

    return 0;
}
