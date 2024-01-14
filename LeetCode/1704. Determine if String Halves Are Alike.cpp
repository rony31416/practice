//https://leetcode.com/problems/determine-if-string-halves-are-alike/description/

class Solution {
public:
    bool halvesAreAlike(string s) {

        int vou = 0;
        int f = 0 , se = 0;
        for(int i = 0 ; i < s.size() ; i++){
            char u = s[i];
            if(u == 'a' or u == 'e' or u == 'i' or u == 'o' or u == 'u' or u == 'A' or u == 'E' or u == 'I' or u == 'O' or u == 'U' )
            {
                if(i<s.size()/2) f++;
                else se++;
            }
           
        }
         //if(vou == s.size() ) return 1;
        // cout<<vou;
         if(f!=se) return false;
        
        return true;
    }
};