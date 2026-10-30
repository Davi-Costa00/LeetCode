class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False
        st = str(x)
        return st == st[::-1]