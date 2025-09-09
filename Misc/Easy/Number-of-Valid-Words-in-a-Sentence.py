from typing import List


class Solution:
    def countValidWords(self, sentence: str) -> int:
        tokens = sentence.split(' ')
        count = 0
        for token in tokens:
            if not token:
                continue

            if any(ch.isdigit() for ch in token):
                continue

            if not all(ch.islower() for ch in token if ch.isalpha()):
                continue

            punctuation_marks = ['.', ',', '!']
            punct_count = sum(token.count(p) for p in punctuation_marks)

            if punct_count > 1:
                continue

            if punct_count == 1 and not any(token.endswith(p) for p in punctuation_marks):
                continue

            if token.count('-') > 1 or token.find('-') == 0 or token.find('-') == token.__len__() - 1:
                continue

            if '-' in token:
                idx = token.find('-')
                if not (token[idx-1].islower() and token[idx-1].isalpha() and token[idx+1].islower() and token[idx+1].isalpha()):
                    continue
            count += 1

        return count
