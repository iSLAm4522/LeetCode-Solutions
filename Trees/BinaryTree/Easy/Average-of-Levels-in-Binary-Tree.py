# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def averageOfLevels(self, root: Optional[TreeNode]) -> List[float]:
        result = []
        que = deque()
        que.append(root)
        while len(que):
            level_size = len(que)
            level_sum :float = 0
            for _ in range(level_size):
                node :TreeNode = que.popleft()
                level_sum += node.val
                if node.left:
                    que.append(node.left)
                if node.right:
                    que.append(node.right)
            result.append(level_sum/level_size)
        return result
