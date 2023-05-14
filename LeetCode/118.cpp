class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal;
        vector<int> pus(1), oldpus;
        pus[0] = 1;
        pascal.push_back(pus);
        for(int i=2;i<=numRows;++i){
            oldpus = pus;
            for(int j=1;j<i-1;++j)
                pus[j] = oldpus[j] + oldpus[j-1];
            pus.push_back(1);
            pascal.push_back(pus);
        }
        return pascal;
    }
};