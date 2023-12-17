//https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/


class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
           map<int,int> m;
           vector<int> ans;
           for(int  i = 0 ; i < numbers.size() ; i++) 
           {
               m[numbers[i]] = i+1;
           } 
           for(int i = 0 ; i < numbers.size() ; i++) 
           {
               int k = target - numbers[i];
               if(m[k] != 0) {
                   ans.push_back(i+1);
                   ans.push_back(m[k]);
                   break;
               }
           }

           return ans;
    }
};