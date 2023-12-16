//https://leetcode.com/problems/remove-element/description/


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
      int i = 0 , j  = 0 ;
      while(i < nums.size() ) {
          if(nums[i] == val) 
          {
              i++;
          }
          else{
              nums[j] = nums[i];
              i++,j++;
          }
      }
       return j;
    }
};


///another approach 

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> v;
        for(int i = 0 ; i < nums.size() ; i++) 
        {
            if(nums[i] != val) v.push_back(nums[i]);
        }
        for(int i = 0 ; i < v.size() ; i++) 
        {
            nums[i] = v[i];
        }
        return (int)v.size();
       
    }
};