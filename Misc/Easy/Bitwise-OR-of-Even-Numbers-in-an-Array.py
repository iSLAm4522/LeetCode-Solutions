class Solution:
    def evenNumberBitwiseORs(self, nums: List[int]) -> int:
        ans = 0
        evens = [num for num in nums if num % 2 == 0]
        for num in evens:
            ans |= num
        return ans