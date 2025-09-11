class Solution:
    def sortVowels(self, s: str) -> str:
        t = list(s)
        vowels = sorted([c for c in s if c in 'aeiouAEIOU'])
        j = 0
        for i in range(len(t)):
            if t[i] in 'aeiouAEIOU':
                t[i] = vowels[j]
                j += 1
        return ''.join(t)
