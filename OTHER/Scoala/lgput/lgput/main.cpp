//
//  main.cpp
//  lgput
//
//  Created by Serban Bantas on 22/02/2020.
//  Copyright © 2020 Serban Bantas. All rights reserved.
//

#include <cstdio>
using namespace std;
const int n_max = 10001; // Definim numarul maxim de cifre al numerelor
const int m = 1999999973;
int main(int argc, const char * argv[])
{
    unsigned int i, n, p;
    long long a, sol = 1;
    
    freopen("lgput.in","r",stdin);
    freopen("lgput.out","w",stdout);
    scanf("%d %d", &n, &p);
    a = n;
    for (i = 0; (1<<i) <= p; ++ i)  // Luam toti biti lui p la rand
    {
        if ( ((1<<i) & p) > 0) // Daca bitul i din p este 1 atunci adaugam n^(2^i) la solutie
            sol= (sol * a) % m;
        
        a=(a * a) % m; // Inmultim a cu a ca sa obtinem n^(2^(i+1))
    }
    printf("%lld\n", sol); // Afisam solutia
    return 0;
}
