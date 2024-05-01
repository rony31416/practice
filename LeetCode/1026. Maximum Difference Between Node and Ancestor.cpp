//https://leetcode.com/problems/maximum-difference-between-node-and-ancestor/description/

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
    int ans;
    int maxAncestorDiff(TreeNode* root) {
        ans = 0;
        dfs(root);
        return ans;
    }
    pair<int,int> dfs(TreeNode* root)
    {
        if(root == NULL) return {INT_MAX,INT_MIN};

        auto[leftMin,leftMax] = dfs(root->left);
        auto[rightMin,rightMax] = dfs(root->right);
        auto curMin = min({root->val,leftMin,rightMin}),
             curMax = max({root->val,leftMax,rightMax});
        
        ans = max({ans,root->val - curMin,curMax-root->val});
        return {curMin,curMax};
    }
};