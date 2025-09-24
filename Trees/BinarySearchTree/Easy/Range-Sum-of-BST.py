class Solution:
    def rangeSumBST(self, root: Optional[TreeNode], low: int, high: int) -> int:
        if root is None:
            return 0
        if root.val > high:
            return self.rangeSumBST(root.left, low, high)
        elif root.val < low:
            return self.rangeSumBST(root.right, low, high)
        left_val = self.rangeSumBST(root.left, low, high)
        right_val = self.rangeSumBST(root.right, low, high)
        return root.val + left_val + right_val
