class Solution:
    def buildArray(self, nums: List[int]) -> List[int]:
        numsCopy = [0] * len(nums)
        
        for i in nums:
            numsCopy[i] = nums[nums[i]]

        return numsCopy
