//
// Created by Serban Bantas on 01.03.2023.
//
#include <cstdio>
using namespace std;
int N, M, s[25], t[25], c[25], a[25], b[25], m[25], p[25];
int main()
{
    scanf("%d\n",&N);
    for(int i=1; i<=N; ++i)
        scanf("%d %d %d",&s[i], &t[i], &c[i]);
    for(int i=1; i<=M; ++i)
        scanf("%d %d %d %d", &a[i], &b[i], &m[i], &p[i]);

    return 0;
}
