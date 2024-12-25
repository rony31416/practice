/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    vector<int> largestValues(TreeNode* root) {

        queue<TreeNode*> q;
        vector<int> ans;
        q.push(root);
        long long int  mx = -10e15,t; 
        while(!q.empty()){
           int z = q.size();
           for(int i = 0 ; i < z ; i++) {
              auto Node = q.front();
             q.pop();
             if(Node != nullptr)
              {
                mx  = max(mx,(long long int)Node->val);
                if (Node->left) q.push(Node->left);
                if (Node->right) q.push(Node->right);
              }
            }
           if( mx != -10e15)
           ans.push_back(mx);
           mx = -10e15;
        }
        return ans;
    }
};