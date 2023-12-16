//https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         set<int> s;
        for(int i = 0 ; i< nums.size() ; i++)
        {
            s.insert(nums[i]);
        }
        int i = 0;
        for(auto u : s) {
          nums[i] = u;
          i++;
        }
        return i;
        
    }
};


//another approach 
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> m;
        for(int i = 0 ; i < nums.size() ; i++) {
            m[nums[i]]++;
        }
       
        int i = 0 ; 
        for(auto u : m) {
            nums[i] = u.first;
            if(u.second >= 2) {
                nums[i+1] = u.first;
                i+=2;
            }
            else i++;
        }
        return i;
        
    }
};