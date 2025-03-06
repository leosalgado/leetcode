class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        my_map = {}

        for i, n in enumerate(nums):
            if target - n in my_map:
                return[my_map[target - n],i]
            my_map[n] = i