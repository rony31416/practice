//https://leetcode.com/problems/jump-game/description/

class Solution {
public:
    bool canJump(vector<int>& nums) {

 
         int cur = 0;
        for(int i = 0 ; i < nums.size()  ;i++) 
        {
           
           if(cur < i) return false;
           cur = max(cur,i + nums[i]);
        }
    
        return true;
        
    }
};