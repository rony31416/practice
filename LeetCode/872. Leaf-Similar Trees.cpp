//https://leetcode.com/problems/leaf-similar-trees/description/

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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        string leaf1="",leaf2="";
        getleaf(root1,leaf1);
        getleaf(root2,leaf2);
        return leaf1==leaf2;
    }
private:
     void getleaf(TreeNode* root,string& leaf)
     {
         if(root == NULL)return;

         getleaf(root->left,leaf);
         if ((root->left == NULL) && (root->right == NULL)) {
            leaf += (to_string(root->val) + ",");
        }
        getleaf(root->right, leaf);

     }
};