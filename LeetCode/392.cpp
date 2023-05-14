class Solution {
public:
    bool isSubsequence(string s, string t) {
        int lt = t.size();
        int ls = s.size(),i,j;
        for(i=0,j=0;i<ls && j<lt;++j)
            if(s[i]==t[j])
                i++;
        
        return i == ls;
    }
};