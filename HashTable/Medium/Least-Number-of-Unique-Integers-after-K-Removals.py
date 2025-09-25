class Solution:
    def findLeastNumOfUniqueInts(self, arr: List[int], k: int) -> int:
        frequencies = list(Counter(arr).values())
        frequencies.sort()
        removed = 0
        for freq in frequencies:
            if k >= freq:
                k -= freq
                removed += 1
            else:
                break
        return len(frequencies) - removed
