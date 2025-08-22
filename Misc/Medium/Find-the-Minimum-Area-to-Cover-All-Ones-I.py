class Solution:
    def minimumArea(self, grid: List[List[int]]) -> int:
        min_row, min_col = float('inf'), float('inf')
        max_row, max_col = 0, 0
        has_one = False
        
        for i in range(len(grid)):
            for j in range(len(grid[0])):
                if grid[i][j] == 1:
                    has_one = True
                    min_row = min(min_row, i)
                    min_col = min(min_col, j)
                    max_row = max(max_row, i)
                    max_col = max(max_col, j)

        if not has_one:
            return 0

        length = max_row - min_row + 1
        width = max_col - min_col + 1
        
        return length * width
