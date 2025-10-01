class Solution:
    def numWaterBottles(self, numBottles: int, numExchange: int) -> int:
        # if numBottles < numExchange:
        #     return numBottles
        result = numBottles
        while numBottles >= numExchange:
            result += numBottles // numExchange
            remainder = numBottles % numExchange
            numBottles //= numExchange
            numBottles += remainder
        return result
