def is_valid_triangle(a, b, c):
    if a <= 0 or b <= 0 or c <= 0:
        return False
    if (a + b <= c) or (a + c <= b) or (b + c <= a):
        return False
    return True

class Solution:
    def largestPerimeter(self, nums: List[int]) -> int:
        nums.sort()
        for i in range(len(nums) - 1, 1, -1):
            if is_valid_triangle(nums[i], nums[i - 1], nums[i - 2]):
                return nums[i] + nums[i - 1] + nums[i - 2]
        return 0
