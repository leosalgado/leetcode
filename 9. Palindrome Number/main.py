class Solution:
    def isPalindrome(self, x: int) -> bool:
        num = str(x)[::-1]

        if num == str(x):
            return True
        else: 
            return False