class Solution:
    def getLeastFrequentDigit(self, n: int) -> int:
        digits_str = str(n)
        digits_dict = {}
        for digit in digits_str:
            if digit in digits_dict:
                digits_dict[digit] += 1
            else:
                digits_dict[digit] = 1
        if not digits_dict:
            return -1
        least_frequent = min(digits_dict.values())
        least_frequent_digits = [int(digit) for digit, freq in digits_dict.items() if freq == least_frequent]
        return min(least_frequent_digits)
