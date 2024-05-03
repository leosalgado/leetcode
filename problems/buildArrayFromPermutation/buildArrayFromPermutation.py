class Solution:
    def buildArray(self, nums: List[int]) -> List[int]:
        numsCopy = []
        
        for i in nums:
            numsCopy.append(nums[i])

        return numsCopy
