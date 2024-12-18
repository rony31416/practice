class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> ans ;
        bool f = false;
        for(int i = 0 ; i < prices.size() ; i++) {
            for(int j = i + 1 ; j < prices.size() ; j++) {
                if(prices[j] <= prices[i]) {
                    ans.push_back(prices[i] - prices[j]);
                    f = true;
                    break;
                }
            }
            if(!f)
            {
                 ans.push_back(prices[i]);
              
            }
               f = false;
        }

        return ans;
    }

};