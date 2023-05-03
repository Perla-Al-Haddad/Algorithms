class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False
        else:
            str_x = str(x)
            p1 = 0
            p2 = len(str_x)-1
            while str_x[p1] == str_x[p2] and p1 < p2:
                p1 += 1
                p2 -= 1
            return p1 > p2
        
sol = Solution()
print(sol.isPalindrome(11))
