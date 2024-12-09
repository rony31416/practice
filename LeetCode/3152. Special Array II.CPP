class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> badInd;
        int n = nums.size();
        vector<int> preSum(n,0);
        for(int i = 1; i < n ; i ++){
            preSum[i] = preSum[i-1];
            if(nums[i-1]%2 == nums[i]%2) preSum[i]++;
        }

        int qn = queries.size();
        vector<bool> ans(qn,true);
        if(n==1) return ans;

        for(int i = 0 ; i< qn ; i++ ){
            int u = queries[i][0],v = queries[i][1];
            int count = preSum[v] - preSum[u];
            ans[i] = (count >= 1 ) ? false : true;

        }
        return ans;
    }

};