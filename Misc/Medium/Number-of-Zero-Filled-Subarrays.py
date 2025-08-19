class Solution:
    def zeroFilledSubarray(self, nums: List[int]) -> int:
        count = nums.count(0)
        cnt = 0
        for i in range(len(nums)):
            if nums[i] == 0:
                cnt += 1
                if cnt > 1:
                    count += cnt - 1
            else:
                cnt = 0
        return count
