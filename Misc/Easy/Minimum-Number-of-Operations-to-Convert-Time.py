class Solution:
    def convertTime(self, current: str, correct: str) -> int:
        current_hour, current_minutes = current.split(':')
        correct_hour, correct_minutes = correct.split(':')
        current_total = int(current_hour) * 60 + int(current_minutes)
        correct_total = int(correct_hour) * 60 + int(correct_minutes)
        total_time = correct_total - current_total
        count = 0
        count += total_time // 60
        total_time %= 60
        count += total_time // 15
        total_time %= 15
        count += total_time // 5
        total_time %= 5
        count += total_time
        return count
