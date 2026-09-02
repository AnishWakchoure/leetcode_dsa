class Solution:
    def reverseDegree(self, s: str) -> int:
        ans = 0
        # loop through each character in the string
        for i in range(len(s)):
            # ord(s[i]) gives ASCII 
            # 123 - ord(s[i]) makes 'a' = 26, 'z' = 1 (reverse degree idea)
            # multiply by (i+1) to weight by position (1-based index)
            ans += (123 - ord(s[i])) * (i+1)
        return ans
