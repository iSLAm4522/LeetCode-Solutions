class Solution:
    def reverseWords(self, s: str) -> str:
        return \ \.join(ele[::-1] for ele in s.split())
