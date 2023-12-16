//https://leetcode.com/problems/valid-palindrome/description/

class Solution {
public:
    bool isPalindrome(string s) {

        string temp = "";
        int len = s.size();
        for(int i = 0 ; i < len ; i++) 
        {
            if(s[i] >= 'A' and s[i] <= 'Z') temp+=tolower(s[i]);
            if(s[i] >= 'a' and s[i] <= 'z') temp+=s[i];
            if(s[i] >= '0' and s[i] <= '9') temp+=s[i];
        }
        if(temp.size() == 0) return true;
         string  st = temp;
         reverse(temp.begin(),temp.end());
         if(st==temp) return true;
         return false;
    }
};