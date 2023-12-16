//https://leetcode.com/problems/palindrome-number/description/

class Solution {
public:
    bool isPalindrome(int x) {
        vector<int> v;
        long long int n = x;
        if(x < 0 ) return false;
        while(x) 
        {
            v.push_back(x%10);
            x/=10;
        }
       // for(auto u : v) cout<<u<<" ";
        int i = v.size();
        int k = i;
         long long int y = 0;
        for(int j = 0 ; j < k ; j++  )
        {
            y+= v[j]*(pow(10,i-1));
            i--;
        } 
       cout<<y;
       if(y == n) return true;
       return false;
    }
};
