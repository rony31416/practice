//https://leetcode.com/problems/group-anagrams/description/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<vector<string>>  ans;
        map<string,vector<string>> m;
        for(auto u : strs) 
        {
            string s = u;
            sort(u.begin(),u.end());
            m[u].push_back(s);
        }

        for(auto u : m) 
        {
            ans.push_back(u.second);
        }

        return ans;
    }
};