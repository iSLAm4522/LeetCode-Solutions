class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        nums = [-num for num in nums]
        heapq.heapify(nums)
        num1, num2 = heapq.heappop(nums), heapq.heappop(nums)
        return (abs(num1) - 1) * (abs(num2) - 1)
