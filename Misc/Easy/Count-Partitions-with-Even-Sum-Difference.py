class Solution:
    def countPartitions(self, nums: List[int]) -> int:
        prefix_sum = [nums[0]]
        count = 0
        size = len(nums)
        for i in range(1, size):
            prefix_sum.append(prefix_sum[i - 1] + nums[i])
        for i in range(size - 1):
            left_partition = prefix_sum[i]
            right_partition = prefix_sum[size - 1] - prefix_sum[i]
            if abs(right_partition - left_partition) % 2 == 0:
                count+=1
        return count
