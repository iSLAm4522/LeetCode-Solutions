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
private:
    int checkBalance(TreeNode* root){
        if(!root) return 0;

        if(!root->left && !root->right) return 1;

        int leftHeight = 0;
        if(root->left) {
            leftHeight = checkBalance(root->left);
            if(leftHeight == -1) return -1;
        }

        int rightHeight = 0;
        if(root->right) {
            rightHeight = checkBalance(root->right);
            if(rightHeight == -1) return -1;
        }

        if(abs(leftHeight - rightHeight) > 1) return -1;

        return max(leftHeight, rightHeight) + 1;
    }

public:
    bool isBalanced(TreeNode* root) {
        return checkBalance(root) != -1;
    }
};
