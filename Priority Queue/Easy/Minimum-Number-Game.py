from typing import List
import heapq

class Solution:
    def numberGame(self, nums: List[int]) -> List[int]:
        ans = []
        heapq.heapify(nums)
        for _ in range(len(nums) // 2):
            num1, num2 = heapq.heappop(nums), heapq.heappop(nums)
            ans.extend([num2, num1])
        return ans
