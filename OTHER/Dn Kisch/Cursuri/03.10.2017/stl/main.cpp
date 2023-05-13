#include <cstdio>
#include <set>
using namespace std;
set<int> s;
int main()
{
    int n,i,x;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        scanf("%d",&x);
        s.insert(x);
    }
    set<int>::iterator it;
    for(it=s.begin();it!=s.end();it++)
        printf("%d ",*it);
    printf("\n");
    set<int>::reverse_iterator rit;
    for(rit=s.rbegin();rit!=s.rend();rit++)
        printf("%d ",*rit);
    printf("\n");
    it=s.begin();
    advance(it,3);
    printf("%d\n",*it);
    x=9;
    ///ERASEEEEEEEEEEEEE
    s.erase(x);
    s.erase(s.begin());
    for(it=s.begin();it!=s.end();it++)
        printf("%d ",*it);
        printf("\n");
    ///FIIIIIIIIIIIIINDDDDDDDD
    x=2;
    it=s.find(x);
    if(it==s.end())
        printf("%d nu exista mai",x);
    else
        printf("%d exista mai",x);
    return 0;
}
