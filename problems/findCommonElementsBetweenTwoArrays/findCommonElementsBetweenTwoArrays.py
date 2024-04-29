class Solution:
    def findIntersectionValues(self, nums1: List[int], nums2: List[int]) -> List[int]:
        val1=0
        val2=0
        for i in nums1:
            if i in nums2:
                val1+=1
        for i in nums2:
            if i in nums1:
                val2+=1
        return [val1, val2]

