//https://leetcode.com/problems/find-players-with-zero-or-one-losses/description/


class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int> m;
        for(auto u : matches) 
        {
            int win = u[0];
            int lose = u[1];
            m[lose]++;
        }
        set<int> s1,s2;
        vector<vector<int>> ans(2);
        for(auto u : matches) {
            int win = u[0];
            int lose = u[1];
            if(m[lose] == 0) s1.insert(lose);
            
            else if(m[lose] == 1)  s2.insert(lose);
             if(m[win] == 0)  s1.insert(win);
            else if(m[win] == 1)  s2.insert(win); 
        }
        
        for(auto u : s1) ans[0].push_back(u);
        for(auto u : s2) ans[1].push_back(u);
        return ans;

    }
};