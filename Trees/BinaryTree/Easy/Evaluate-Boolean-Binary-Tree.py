# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def evaluateTree(self, root: Optional[TreeNode]) -> bool:
        if root.left is None and root.right is None:
            return True if root.val else False
        left_tree = self.evaluateTree(root.left) 
        right_tree = self.evaluateTree(root.right)
        return left_tree | right_tree if root.val == 2 else left_tree & right_tree
