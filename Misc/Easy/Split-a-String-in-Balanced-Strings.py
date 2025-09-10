from typing import List

class Solution:
    def balancedStringSplit(self, s: str) -> int:
        l_count = r_count = count = 0
        for ch in s:
            if ch == 'R':
                r_count += 1
            elif ch == 'L':
                l_count += 1
            if l_count == r_count:
                count += 1
                l_count = r_count = 0
        return count
