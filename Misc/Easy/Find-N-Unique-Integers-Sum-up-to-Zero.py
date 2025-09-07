from typing import List

class Solution:
    def sumZero(self, n: int) -> List[int]:
        output = []
        num = 1
        while n > 1:
            output.append(num)
            output.append(-num)
            num += 1
            n -= 2
        if n > 0:
            output.append(0)
        return output
