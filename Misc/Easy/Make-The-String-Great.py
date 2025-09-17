class Solution:
    def makeGood(self, s: str) -> str:
        char_list = list(s)
        idx = 0 
        while idx < len(char_list) - 1:
            if abs(ord(char_list[idx]) - ord(char_list[idx + 1])) == 32:
                del char_list[idx:idx+2]
                idx = max(0, idx - 1)
            else:
                idx += 1
        return ''.join(char_list)
