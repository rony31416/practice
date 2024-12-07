//https://leetcode.com/problems/special-positions-in-a-binary-matrix/description/

class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        vector<int> col,row;
        int sum = 0;
        for(int i = 0 ; i < n ; i ++) {
            for(int j = 0 ; j < m ; j++) 
            {
                sum+=mat[i][j];
            }
            row.push_back(sum);
            sum = 0;
        }

        for(int j = 0 ; j < m ;  j++) {
            for(int i = 0 ; i < n ; i++) 
            {
                sum+=mat[i][j];
            }
            col.push_back(sum);
            sum = 0;
        }

      int ans = 0;
      for(int i = 0 ; i < n ; i ++) {
            for(int j = 0 ; j < m ; j++) 
            {

               if(mat[i][j] == 1 and row[i] == 1 and col[j] == 1) ans++;
            }
        }
     return ans;
    }
};


//java code

class Solution {
    public int numSpecial(int[][] mat) {
        int n = mat.length;
        int m = mat[0].length;

        int[] row = new int[n];
        int[] col = new int[m];
        int sum;

        for (int i = 0; i < n; i++) {
            sum = 0;
            for (int j = 0; j < m; j++) {
                sum += mat[i][j];
            }
            row[i] = sum;
        }

        for (int j = 0; j < m; j++) {
            sum = 0;
            for (int i = 0; i < n; i++) {
                sum += mat[i][j];
            }
            col[j] = sum;
        }

        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == 1 && row[i] == 1 && col[j] == 1) {
                    ans++;
                }
            }
        }

        return ans;
    }
}