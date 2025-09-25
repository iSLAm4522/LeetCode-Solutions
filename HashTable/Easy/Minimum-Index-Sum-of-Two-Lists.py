class Solution:
    def findRestaurant(self, list1: List[str], list2: List[str]) -> List[str]:
        idx_map = {s: i for i, s in enumerate(list1)}
        min_sum = float('inf')
        result = []

        for i, s in enumerate(list2):
            if s in idx_map:
                current_sum = i + idx_map[s]
                if current_sum < min_sum:
                    min_sum = current_sum
                    result = [s]
                elif current_sum == min_sum:
                    result.append(s)
        
        return result
