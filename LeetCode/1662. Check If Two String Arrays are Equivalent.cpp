//https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/description/

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
       /// sort(word1.begin(),word1.end());
        ///sort(word2.begin(),word2.end());
         string s1="",s2="";
        for(auto u : word1) {
             s1+=u;
        }
        for(auto u : word2) {
            s2+=u;
        }
        return(s1==s2);
    }
};