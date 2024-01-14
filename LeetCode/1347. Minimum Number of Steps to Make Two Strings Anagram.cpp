//https://leetcode.com/problems/minimum-number-of-steps-to-make-two-strings-anagram/description/

class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int> m;
        for(auto u : t) m[u]++;
        int ans = 0 ;
        for(auto u : s) {
            if(m[u] == 0)ans++;
           else  m[u]--; 
        } 
        return ans;
    }
};