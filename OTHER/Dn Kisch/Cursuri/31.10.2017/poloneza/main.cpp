#include <stack>
#include <cstdio>
#include <vector>
#include <cstring>
#include <cctype>
#include <string>
using namespace std;
stack<char>op;
stack<char>polo;
string s;
inline void priority(char ch)
{
    if(op.empty() || ch=='(')
    {
        op.push(ch);
        return;
    }
    if(op.top()=='(')
    {
        op.push(ch);
        return;
    }
    if(ch==')')
    {
        while(1)
        {
            if(op.top()=='(')
            {
                op.pop();
                break;
            }
            else
            {
                polo.push(op.top());
                op.pop();
            }
        }
        return;
    }
    if(ch=='*' || ch=='/' || ch=='%')
        if(op.top()=='+' ||op.top()=='-')
        {
            op.push(ch);
            return;
        }
        else
        {
            while(1)
            {
                if(op.empty() || op.top()=='(' || (op.top()=='+' ||op.top()=='-'))
                {
                    op.push(ch);
                    return;
                }
                else
                {
                    polo.push(op.top());
                    op.pop();
                }
            }
        }
    if(ch=='+' ||ch=='-')
        {
            while(1)
            {
                if(op.empty() || op.top()=='(')
                {
                    op.push(ch);
                    return;
                }
                else
                {
                    polo.push(op.top());
                    op.pop();
                }
            }
        }
}
int main()
{
    freopen("polo.in","r",stdin);
    freopen("polo.out","w",stdout);
    char ch;
    while(scanf("%c",&ch)!=EOF)
    {
        if(isalpha(ch))
            polo.push(ch);
        else
            priority(ch);
    }
    while(!op.empty())
        {
                    polo.push(op.top());
                    op.pop();
                }
    while(!polo.empty())
        {
            s+=polo.top();
            polo.pop();
        }
    for(int i=s.size()-1;i>=0;i--)
        printf("%c",s[i]);
    return 0;
}
