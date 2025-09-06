from typing import List
class Solution:
    def counting_sort(self, nums: List[int]) -> List[int]:
        min_val, max_val = min(nums), max(nums)
        k = max_val - min_val + 1

        count = [0] * k
        output = [0] * len(nums)

        for num in nums:
            count[num - min_val] += 1
        
        for i in range(1, k):
            count[i] += count[i - 1]
        
        for num in reversed(nums):
            output[count[num - min_val] - 1] = num
            count[num - min_val] -= 1
        return output

    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        sorted_list = self.counting_sort(nums)
        output_list = []
        for num in nums:
            output_list.append(sorted_list.index(num))
        return output_list
