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
        int minDepthHelper(TreeNode* root){
            if(!root)
                return INT_MAX;
            if(!root->left && !root->right)
                return 1;
            return min(minDepthHelper(root->left), minDepthHelper(root->right)) + 1;
        }
        int minDepth(TreeNode* root) {
            if(!root)
                return 0;
            return minDepthHelper(root);
        }
};