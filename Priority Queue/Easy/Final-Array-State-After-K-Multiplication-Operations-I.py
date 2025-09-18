class Solution:
    def getFinalState(self, nums: List[int], k: int, multiplier: int) -> List[int]:
        queue = []
        queue = [(num, i) for i, num in enumerate(nums)]
        heapq.heapify(queue)
        while k:
            num, idx = heapq.heappop(queue)
            num = num * multiplier
            heapq.heappush(queue, (num, idx))
            k -= 1
        queue.sort(key=lambda x: x[1])
        return [x[0] for x in queue]
