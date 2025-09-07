class Solution:
    def minOperations(self, nums: List[int]) -> int:
        min_val, max_val = min(nums), max(nums)
        if min_val == max_val:
            return 0
        else:
            return 1
