class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        my_map = {}

        for n in nums:
            if n in my_map:
                my_map[n] += 1
            else:
                my_map[n] = 1

        arr = []
        for num, cnt in my_map.items():
            arr.append([cnt, num])
        arr.sort()

        result = []
        while len(result) < k:
            result.append(arr.pop()[1])
        return result
