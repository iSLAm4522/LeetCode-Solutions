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
        vector<vector<int>> levelOrder(TreeNode* root) {
            if (!root)
                return {};
            vector<vector<int>> result;
            queue<TreeNode*> bfsQueue;
            bfsQueue.push(root);
            while (!bfsQueue.empty())
            {
                vector<int> level;
                int levelSize = bfsQueue.size();
                for (int i = 0; i < levelSize; i++)
                {
                    TreeNode* node = bfsQueue.front();
                    bfsQueue.pop();
                    
                    level.push_back(node->val);
                    if(node->left)
                        bfsQueue.push(node->left);
                    if(node->right)
                        bfsQueue.push(node->right);
                }
                result.push_back(level);
            }
            return result;
        }
};