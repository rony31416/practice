
//https://leetcode.com/problems/majority-element/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int count = 0 ,candidate = -1;
       for(int i = 0 ; i < nums.size() ; i++) 
       {
           if(count == 0 ) {
               candidate = nums[i];
           }

           if(nums[i] == candidate ) {
               count++;
           }
           else {
               count--;
           }
       }
       return candidate;
    }
};


//another approach

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>m;
        for(auto u : nums) 
        {
            m[u]++;
        }
        int ret = -1,i = -1;
        for(auto u : m) 
        {
            if(ret <= u.second)
            {
                ret = u.second;
                i = u.first;
            }
        }
        return i;
    }
};