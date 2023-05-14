//PscPld - Algorithm Manacher O(n)
class Solution {
public:
    string longestPalindrome(string s) {
        vector<char> v;
        int n=s.size();
    for(long long i=0;i<n;i++){
        v.push_back('*');
        v.push_back(s[i]);
    }
    v.push_back('*');
    int len = v.size(), rez = -1, l = 0, k = 0, maxx = 0, ind = 0;
    vector<int> f(2*n+5,0);
    for (int i=0;i<len;i++){
        if(i>rez)
            k=0;
        else
            k= f[l+rez-i] > rez-i ? rez-i : f[l+rez-i];
        while (i+k<len and i-k>=0 and v[i+k]==v[i-k])
            k++;
        f[i]=k;
        if(maxx<f[i])
            maxx = f[i], ind = i;
        k--;
        if (i+k>rez){
            l=i-k;
            rez=i+k;
        }
    }
    string out;
    for(int i = ind-maxx+1;i < ind + maxx; ++i)
        if(v[i]!='*')
            out = out + v[i];
    return out;
    }
};