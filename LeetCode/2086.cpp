class Solution {
public:
    int minimumBuckets(string s) {
        int len = s.size(),nr = 0;
        if(len == 1)
            return s[0] == '.'? 0 : -1;
        if(s[0] == 'H' )
            if(s[1] == 'H')
                return -1;
            else
                s[1] = 'B',nr++;
        for(int i=1;i<len-1;++i){
            if(s[i] == 'H'){
                if(s[i+1] == 'H')
                {
                    if(s[i-1] == 'H')
                        return -1;
                    else
                    {
                        if(s[i-1] == '.')
                            nr++;
                    }
                }
                else
                {
                    if(s[i-1] == 'B')
                        continue;
                    else
                    {
                        if(s[i+1] == '.')
                            s[i+1] = 'B', nr++;
                    }
                }
            }
        }
        if(s[len-1] == 'H')
            if(s[len-2] == 'H')
                return -1;
            else
                if(s[len-2] == '.')
                    nr++;
        return nr;
    }
};