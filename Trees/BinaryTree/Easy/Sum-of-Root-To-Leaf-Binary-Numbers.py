# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:

    def sumRootToLeaf(self, root: Optional[TreeNode], path_sum: str = "") -> int:
        if not root:
            return 0
        path_sum += f"{root.val}"
        if not root.left and not root.right:
            return int(path_sum, 2)
        left_sum = self.sumRootToLeaf(root.left, path_sum)
        right_sum = self.sumRootToLeaf(root.right, path_sum)
        return left_sum + right_sum

