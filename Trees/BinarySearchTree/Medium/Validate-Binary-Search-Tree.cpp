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
    bool isValidBSTHelper(TreeNode* root, long long minVal, long long maxVal) {
        if (!root)
            return true;
        
        if (root->val <= minVal || root->val >= maxVal)
            return false;
        
        return isValidBSTHelper(root->left, minVal, (long long)root->val)
            && isValidBSTHelper(root->right, (long long)root->val, maxVal);
    }
    
    bool isValidBST(TreeNode* root) {
        if(!root->left && !root->right)
            return true;
        return isValidBSTHelper(root, LLONG_MIN, LLONG_MAX);
    }
};
