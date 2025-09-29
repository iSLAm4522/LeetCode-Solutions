class Solution:
    def findPermutationDifference(self, s: str, t: str) -> int:
        s_dict = {v: i for i, v in enumerate(s)}
        t_dict = {v: i for i, v in enumerate(t)}
        ans = 0
        for k, v in s_dict.items():
            ans += abs(v - t_dict[k])
        return ans
