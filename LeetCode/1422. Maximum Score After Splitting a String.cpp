//https://leetcode.com/problems/maximum-score-after-splitting-a-string/description/

class Solution {
public:
    int maxScore(string s) {
        int total = 0;
        for(int i = 0 ; i < s.size() ; i++) {
            if(s[i] == '1') total++;
        }
       

        if(total == s.size()) return total - 1;
        if(total == 0 ) return 1;
        int ans = -1;
        int left = (s[0] == '0') ? 1 : 0;
        int right = left == 1 ? total : total - 1;
        ans = max(ans,left+right);
        for(int i = 1 ; i< s.size()-1; i++) 
        {
            if(s[i] == '0'){
              left++;
            }
            else if( s[i] == '1') right--;
    
            ans = max(ans,left+right);
           
        }
        ans = max(ans,left+right);
        return ans;
    }
};