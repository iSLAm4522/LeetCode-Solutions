class Solution:
    def maxFrequencyElements(self, nums: List[int]) -> int:
        frequencies = list(Counter(nums).values())
        max_freq = max(frequencies)
        max_count = frequencies.count(max_freq)
        return max_freq * max_count
