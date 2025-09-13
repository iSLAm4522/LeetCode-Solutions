class Solution:
    def smallestAbsent(self, nums: List[int]) -> int:
        avg = sum(nums) / len(nums)
        num_set = set(nums)
        start = max(1, math.ceil(avg) if avg != int(avg) else int(avg) + 1)
        while start in num_set:
            start += 1
        return start
