//https://leetcode.com/problems/is-subsequence/description/


class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0 , j = 0 ;
        int n = s.size();
        int m = t.size();
        if(n>m) return false;
        for( ; i < m ; i++) {
            if(t[i] == s[j])j++;
        }        
        return (j == n);
    }
};