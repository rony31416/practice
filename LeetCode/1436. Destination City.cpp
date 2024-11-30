//https://leetcode.com/problems/destination-city/description/

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,string> m;
        for(int i = 0 ;  i < paths.size() ; i++) 
        {
            m[paths[i][0]] = paths[i][1];
        }

        string ans = m.begin()->second;
        for(auto u : m){
            auto pos = m.find(ans);
            if(pos != m.end()) ans = pos->second;

            //cout<<" ans : "<<ans<<"\n"; 
        } 
        //if(ans == m.rbegin()->first) ans = m.rbegin()->second;

        return ans;
    }
};