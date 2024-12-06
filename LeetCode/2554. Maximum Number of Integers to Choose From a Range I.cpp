class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
     map<int,int> m;
     for(int i = 0 ; i < banned.size() ; i++ ){
        m[banned[i]]++;
     }
     int ans = 0 ; 
    for(int i = 1 ; i<= n ; i++) {
        if(maxSum < 0) break;
        if(m[i] == 0) {
            maxSum-=i;
             if(maxSum < 0) break;
            ans++;
        }
    }
    return ans;
    } 
};
