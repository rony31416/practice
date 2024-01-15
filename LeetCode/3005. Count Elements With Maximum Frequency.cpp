//https://leetcode.com/problems/count-elements-with-maximum-frequency/description/

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        
        map<int,int> m;
        for(auto u : nums) m[u]++;
        
        int mx_f = -1;
        for(auto u : m) {
            if(u.second >= mx_f) mx_f = u.second;
        }
        
        int ans = 0;
        for(auto u : m) {
            if(u.second == mx_f)  ans+=u.second;
        }
        
       return ans;
        
    }
};