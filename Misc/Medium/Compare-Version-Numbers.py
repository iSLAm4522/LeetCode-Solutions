class Solution:
    def compareVersion(self, version1: str, version2: str) -> int:
        arr1, arr2 = version1.split('.'), version2.split('.')
        length = max(len(arr1), len(arr2))
        for i in range(length):
            num1 = int(arr1[i]) if i < len(arr1) else 0
            num2 = int(arr2[i]) if i < len(arr2) else 0
            if num1 < num2:
                return -1
            elif num1 > num2:
                return 1
        return 0
