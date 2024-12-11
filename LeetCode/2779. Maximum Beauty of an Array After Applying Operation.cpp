class Solution {
public:
   int solve(vector<int> &arr, int v){
    int l = 0 , h = arr.size() - 1, res = 0;
    while(l <= h){
        int m = l + (h-l)/2;
        if(arr[m] <= v){
            res = m;
            l = m + 1;
        }
        else{
            h = m - 1;
        }
        
    }
    return res;
   }
    int maximumBeauty(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int maxB = 0;
        for(int i = 0 ; i  < nums.size() ; i++){
            int upB = solve(nums,nums[i]+2*k);
            maxB = max(maxB,upB - i + 1);
        }
        return maxB;
    }

};