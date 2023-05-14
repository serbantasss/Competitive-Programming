class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n == 0)
            return 0;
        if(n == 1)
            return 1;
        int v[n+5], maxval = 1;
        v[0] = 0;
        v[1] = 1;
        for(int i=2;i<=n;++i)
            if(i%2==0)
                v[i] = v[i/2];
            else
                v[i] = v[i/2] + v[i/2+1], maxval=max(maxval,v[i]);
        return maxval;
    }
};