//https://leetcode.com/problems/image-smoother/description/

class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int n = img.size();
        int m = img[0].size();
        vector<vector<int>> ans(n,vector<int> (m));

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++)
            {
                int cnt = 0;
                int sum = 0;
                if(j-1 >= 0)cnt++,sum+=img[i][j-1];
                if(j+1 < m) cnt++,sum+=img[i][j+1];
                if(i-1 >= 0) cnt++,sum+=img[i-1][j];
                if(i+1 < n) cnt++,sum+=img[i+1][j];
                if(i-1 >= 0 and j-1>= 0) cnt++,sum+=img[i-1][j-1];
                if(i-1>=0 and j+1 < m ) cnt++,sum+=img[i-1][j+1];
                if(i+1 < n and j-1 >=0) cnt++,sum+=img[i+1][j-1];
                if(i+1 < n and j + 1 < m) cnt++,sum+=img[i+1][j+1];

                cnt++;
                sum+=img[i][j];
                ans[i][j] = (sum/cnt);
            }
        }


        return ans;
        
    }
};