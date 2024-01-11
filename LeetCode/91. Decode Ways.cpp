//https://leetcode.com/problems/decode-ways/description/

class Solution {
public:
      
    int f(int ind,string s,vector<int>&dp) 
    {
        if(s[ind] == '0') return 0;

        if(dp[ind] != -1) return dp[ind];
        if(ind == 0) return  1;
        

        int left = f(ind-1,s,dp);

        int right = 0 ;
        
       //
        if(ind > 1){
            int a = (s[ind-2] - '0')*10 + (s[ind-1] - '0');
             // cout<<"A : "<<a<<" ";
            if(a<=26)
            right = f(ind-2,s,dp);
        }
        return dp[ind] = left+right;
    }


    int numDecodings(string s) {
        int n = s.size();
        vector<int> dp(n+1,-1);
        return f(n,s,dp);
        
    }
};