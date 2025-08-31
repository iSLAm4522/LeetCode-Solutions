from collections import Counter

class Solution:
    def maxFreqSum(self, s: str) -> int:
        vowels = set('aeiou')
        char_counts = Counter(s)

        vowel_freq = max([char_counts[v] for v in vowels & set(char_counts.keys())], default=0)
        consonant_freq = max([char_counts[c] for c in char_counts if c not in vowels], default=0)
        
        return vowel_freq + consonant_freq
