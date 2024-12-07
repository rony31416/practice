class Solution {
public:
    bool check(int mid , vector<int>& nums , int o){
        for(int i = 0 ; i < nums.size() ; i++) {
            o-=(nums[i]/mid);
            if(nums[i]%mid == 0 )o++;
        }
        return o>=0;
    }
    int minimumSize(vector<int>& nums, int o) {

        int  l = 1 , h = INT_MAX;
        int ans = 0 ;
        while(l<=h){
            int mid = l + (h-l)/2;

            if(check(mid,nums,o)){
                ans = mid;
                h = mid -1 ;
            }
            else {
                l = mid+1;
            }
        }

        return ans;
        
    }
};
