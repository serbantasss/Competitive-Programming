class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int maxlen = 0,n = arr.size();
        for(int i=0;i<n-1;++i)
            if(arr[i]<arr[i+1]){
                int st = i;
                while(st<n-1 && arr[st]<arr[st+1])
                    st++;
                if(st == n-1)
                    return maxlen;
                if(arr[st]<=arr[st+1]){
                    i = st;
                    continue;
                }
                while(st<n-1 && arr[st]>arr[st+1])
                    st++;
                maxlen = max(maxlen,st-i+1);
                i = st-1;
            }
        return maxlen;
    }
};