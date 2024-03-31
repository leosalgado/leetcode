class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        map = {}
        for i, n in enumerate(nums):
            remainder = target - n
            if(remainder in map):
                return [map[remainder], i]
            map[n] = i