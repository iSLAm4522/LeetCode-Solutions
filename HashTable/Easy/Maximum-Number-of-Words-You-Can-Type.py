class Solution:
    def canBeTypedWords(self, text: str, brokenLetters: str) -> int:
        words = text.split(' ')
        brokenLetters_set = set(brokenLetters)
        count = 0
        for word in words:
            if all(char not in brokenLetters_set for char in word):
                count += 1
        return count
