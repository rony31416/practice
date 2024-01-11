//https://leetcode.com/problems/assign-cookies/description/

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int ans = 0;
        for(int i = 0 , j = 0 ; i < g.size() and j < s.size() ;) {
           if(s[j] >= g[i]){
               ans++;
               i++;
               j++;
           }
           else j++;
        }
        return ans;
    }
};