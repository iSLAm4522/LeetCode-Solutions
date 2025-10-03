class Solution:
    def finalValueAfterOperations(self, operations: List[str]) -> int:
        oper_dict = {"X++": 1, "++X": 1, "X--": -1, "--X": -1}
        result = 0
        for op in operations:
            result += oper_dict[op]
        return result
