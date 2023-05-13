//
// Created by Serban Bantas on 01.03.2023.
//
#include <cstdio>
using namespace std;
int v[100005], n, fh, lh, fg, lg, res = 0;
char s[100005];
int main()
{
    scanf("%d\n",&n);
    for(int i=1;i<=n;++i)
        scanf("%c",&s[i]);
    for(int i=1;i<=n;++i) {
        scanf("%d", &v[i]);
        if(s[i] == 'H')
            if( fh == 0)
                fh = i, lh = i;
            else
                lh = i;
        if(s[i] == 'G')
            if( fg == 0)
                fg = i, lg = i;
            else
                lg = i;
    }
    if(v[fg] >= lg){
        for(int i = 1; i < fg; ++i)
        {
            if(i == fh)
                continue;
            if(s[i] == 'H' && v[i] >= fg)
                res++;
        }
    }
    if(v[fh] >= lh){
        for(int i = 1; i < fh; ++i)
        {
            if(i == fg)
                continue;
            if(s[i] == 'G' && v[i] >= fh)
                res++;
        }
    }
    if ((v[fg] >= lg || (fg <= fh && v[fg] >= fh)) && (v[fh] >= lh || (fh <= fg && v[fh] >= fg)))
        res++;
    printf("%d", res);
    return 0;
}
