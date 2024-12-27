class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& v) {
        int n = v.size(),ans = -1e9;
        int pre = v[n-1] - n + 1;

        for(int i = n-2 ;i >=0  ; i--){
           ans = max(ans,v[i]+i + pre);
           pre = max(pre, v[i] - i);
        }

       
        return ans;
    }
};