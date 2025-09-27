class Solution:
    def largestTriangleArea(self, points: List[List[int]]) -> float:
        area = 0
        for i in range(len(points)):
            for j in range(i + 1, len(points)):
                for k in range(j + 1, len(points)):
                    current_area = 0.5 * abs(
                        points[i][0] * (points[j][1] - points[k][1])
                        + points[j][0] * (points[k][1] - points[i][1])
                        + points[k][0] * (points[i][1] - points[j][1])
                    )
                    area = max(area, current_area)
        return area
