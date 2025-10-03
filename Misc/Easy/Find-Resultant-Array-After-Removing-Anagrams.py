class Solution:
    def removeAnagrams(self, words: List[str]) -> List[str]:
        sorted_words = [(sorted(v), i) for i, v in enumerate(words)]
        idx = 1
        while len(sorted_words) > 1 and idx < len(sorted_words):
            if sorted_words[idx][0] == sorted_words[idx - 1][0]:
                del sorted_words[idx]
            else:
                idx += 1
        return [words[idx] for _, idx  in sorted_words]
