//https://leetcode.com/problems/minimum-time-to-make-rope-colorful/description/

class Solution {
public:
    int minCost(string colors, vector<int>& neededTime)  {
        
        int ans = 0 ;
        for(int i = 0 ; i < colors.size() - 1 ; i++) 
        {
            if(colors[i] == colors[i+1])
            {
               int j = i , maxi = neededTime[i],sum = 0;
               while(colors[i] == colors[j] and j < colors.size()) {
                sum+=neededTime[j];
                maxi = max(maxi,neededTime[j]);
                j++;
                }
                i = j - 1;
             
                ans+=(sum-maxi);
           }
        }
        
        return ans;
    }
};