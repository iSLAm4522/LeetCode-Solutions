class Solution:
    def findClosest(self, x: int, y: int, z: int) -> int:
        if abs(x - z) == abs(y - z):
            return 0
        else:
            return 2 - (abs(x - z) < abs(y - z))
