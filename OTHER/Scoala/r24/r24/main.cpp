//
//  main.cpp
//  r24
//
//  Created by Serban Bantas on 17/12/2019.
//  Copyright © 2019 Serban Bantas. All rights reserved.
//

#include <cstdio>
using namespace std;
int main(int argc, const char * argv[]) {
    long long r,c,k;
    scanf("%lld%lld%lld",&r,&c,&k);
    printf("%lld",((r-1)/k+1)*((c-1)/k+1));
    return 0;
}
